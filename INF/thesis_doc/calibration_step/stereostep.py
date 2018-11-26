#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8
#
# Copyright © 2018 Cesar Sinchiguano <cesarsinchiguano@hotmail.es>
#
# Distributed under terms of the BSD license.

"""

"""

import cv2
from glob import glob
import numpy as np
from matplotlib import pyplot as plt
import numpy

all_right_corners=[]
all_left_corners=[]
all_3d_points=[]

idx=[3, 6, 12, 14] #we use only some image pairs
valid_idxs=[] #we will also keep an list of valid indices, i.e., indices for which the procedure succeeded


x,y=np.meshgrid(range(7),range(6))
# print "x:\n",x
# print "y:\n",y

world_points=np.hstack((x.reshape(42,1),y.reshape(42,1),np.zeros((42,1)))).astype(np.float32)
#print world_points
_3d_points=[]
_2d_points=[]



mtx=None
dist =None
def calibrateCamerafunction():

    global mtx
    global dist
    img_paths=glob('data/*.jpg') #get paths of all images
    for path in img_paths:
        im=cv2.imread(path)
        ret, corners = cv2.findChessboardCorners(im, (7,6))

        if ret: #add points only if checkerboard was correctly detected:
            _2d_points.append(corners) #append current 2D points
            _3d_points.append(world_points) #3D points are always the same

    ret, int_mtx, dist, rvecs, tvecs = cv2.calibrateCamera(_3d_points, _2d_points, (im.shape[1],im.shape[0]),None,None)
    print "Ret:",ret
    print "Mtx:",int_mtx," ----------------------------------> [",int_mtx.shape,"]"
    print "Dist:",dist," ----------> [",dist.shape,"]"
    print "rvecs:",rvecs," --------------------------------------------------------> [",rvecs[0].shape,"]"
    print "tvecs:",tvecs," -------------------------------------------------------> [",tvecs[0].shape,"]"
    print('done when it comes to calibration for the camera!!!')



def drawLine(line,image):
    a=line[0]
    b=line[1]
    c=line[2]

    #ax+by+c -> y=(-ax-c)/b
    #define an inline function to compute the explicit relationship
    def y(x): return (-a*x-c)/b

    x0=0 #starting x point equal to zero
    x1=image.shape[1] #ending x point equal to the last column of the image

    y0=y(x0) #corresponding y points
    y1=y(x1)

    #draw the line
    cv2.line(image,(x0,int(y0)),(x1,int(y1)),(0,255,255),3)#draw the image in yellow with line_width=3



def main():

    calibrateCamerafunction()
    for i in idx:
        im_left=cv2.imread('data/left%02d.jpg'%i) #load left and right images
        im_right=cv2.imread('data/right%02d.jpg'%i)

        #im_left = cv2.imread('left01.jpg')
        #ret, corners = cv2.findChessboardCorners(im_left, (7,6))

        ret_left,left_corners=cv2.findChessboardCorners(im_left,(7,6))
        ret_right,right_corners=cv2.findChessboardCorners(im_right,(7,6))


        if ret_left and ret_right: #if both extraction succeeded
            valid_idxs.append(i)
            all_right_corners.append(right_corners)
            all_left_corners.append(left_corners)
            all_3d_points.append(world_points) #3D points are always the same
    # print len(all_right_corners)
    # print len(all_left_corners)
    # print len(all_3d_points)
    #
    # print all_right_corners[0].shape
    # print all_left_corners[0].shape
    # print all_3d_points[0].shape

    print all_right_corners[0].reshape(-1,2)[0]

    '''
    3.2 Epipolar Lines
    Let's consider a given pair of stereo images, e.g.:
    '''
    global mtx
    global dist

    print(im_left.shape[1],im_left.shape[0])


    R = None
    T = None
    E = None
    F = None
    flags = cv2.CALIB_FIX_INTRINSIC

    T = numpy.zeros((3, 1), dtype=numpy.float64)
    R = numpy.eye(3, dtype=numpy.float64)

    #retval, _, _, _, _, R, T, E, F=cv2.stereoCalibrate(all_3d_points,  all_left_corners, all_right_corners, (im_left.shape[1],im_left.shape[0]),
    #mtx,dist,mtx,dist,R,T,criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, 1, 1e-5),flags=flags)

    retval, _, _, _, _, R, T, E, F=cv2.stereoCalibrate(all_3d_points,  all_left_corners, all_right_corners, (im_left.shape[1],im_left.shape[0]),
    mtx,dist,mtx,dist,None,None,None,flags=flags)


    print('I am here!!!')

    print(valid_idxs)
    selected_image=1
    left_im=cv2.imread("data/left%02d.jpg"%valid_idxs[selected_image])
    right_im=cv2.imread("data/right%02d.jpg"%valid_idxs[selected_image])
    left_corners=all_left_corners[selected_image].reshape(-1,2)
    right_corners=all_right_corners[selected_image].reshape(-1,2)
    print('done well!!!')
    plt.figure(figsize=(10,4))
    plt.subplot(221)
    plt.imshow(left_im)
    plt.subplot(222)
    plt.imshow(right_im)

    #Given a point on the left image,
    #the matching point in the right one will lie on the corresponding epipolar line.
    #In general, for each point in one of the two images
    # it is possible to find the corresponding epipolar line in the other image. Let's consider for instance the first corner detected in the left image and its corresponding point in the right one:

    import copy
    left_im2=copy.deepcopy(left_im)
    right_im2=copy.deepcopy(right_im)


    cv2.circle(left_im2,(left_corners[0,0],left_corners[0,1]),10,(0,0,255),10)
    cv2.circle(right_im2,(right_corners[0,0],right_corners[0,1]),10,(0,0,255),10)

    lines_right = cv2.computeCorrespondEpilines(all_left_corners[selected_image], 1,F)
    print lines_right.shape
    lines_right=lines_right.reshape(-1,3) #reshape for convenience
    print lines_right.shape


if __name__=="__main__":
    main()
