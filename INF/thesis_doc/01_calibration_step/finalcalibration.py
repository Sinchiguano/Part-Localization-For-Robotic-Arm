#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8
#
# Copyright © 2018 Cesar Sinchiguano <cesarsinchiguano@hotmail.es>
#
# Distributed under terms of the BSD license.

"""

"""
from glob import glob
import cv2
import numpy as np
from matplotlib import pyplot as plt

_3d_points=[]
_2d_points=[]

x,y=np.meshgrid(range(7),range(6))
# print "x:\n",x
# print "y:\n",y

world_points=np.hstack((x.reshape(42,1),y.reshape(42,1),np.zeros((42,1)))).astype(np.float32)
#print world_points

def main():

    img_paths=glob('data/*.jpg') #get paths of all images
    for path in img_paths:
        im=cv2.imread(path)
        ret, corners = cv2.findChessboardCorners(im, (7,6))

        if ret: #add points only if checkerboard was correctly detected:
            _2d_points.append(corners) #append current 2D points
            _3d_points.append(world_points) #3D points are always the same

    ret, int_mtx, dist, rvecs, tvecs = cv2.calibrateCamera(_3d_points, _2d_points, (im.shape[1],im.shape[0]),None,None)
    # print "Ret:",ret
    # print "Mtx:",int_mtx," ----------------------------------> [",int_mtx.shape,"]"
    # print "Dist:",dist," ----------> [",dist.shape,"]"
    # print "rvecs:",rvecs," --------------------------------------------------------> [",rvecs[0].shape,"]"
    # print "tvecs:",tvecs," -------------------------------------------------------> [",tvecs[0].shape,"]"


    # plt.imshow(cv2.imread('data/left12.jpg')[...,::-1])
    # plt.show()

    # im=cv2.imread('data/left12.jpg')[:,:]
    # im_undistorted=cv2.undistort(im, int_mtx, dist)
    # plt.subplot(121)
    # plt.imshow(im)
    # plt.subplot(122)
    # plt.imshow(im_undistorted)
    # plt.show()

    #==================================
    #2.4 Drawing 3D points on the scene

    _3d_corners = np.float32([[0,0,0], [0,3,0], [3,3,0], [3,0,0],
                               [0,0,-3],[0,3,-3],[3,3,-3],[3,0,-3]])

    img=cv2.imread('left07.jpg') #load the correct image
    image_index=6
    cube_corners_2d,_ = cv2.projectPoints(_3d_corners,rvecs[image_index],tvecs[6],int_mtx,dist)
    #the underscore allows to discard the second output parameter (see doc)
    #I need to point to the right rotation and translation matrix of each image.

    print cube_corners_2d.shape #the output consists in 8 2-dimensional points
    #print(img_paths[image_index])
    red=(0,0,255) #red (in BGR)
    blue=(255,0,0) #blue (in BGR)
    green=(0,255,0) #green (in BGR)
    line_width=5

    #first draw the base in red
    cv2.line(img, tuple(cube_corners_2d[0][0]), tuple(cube_corners_2d[1][0]),red,line_width)
    cv2.line(img, tuple(cube_corners_2d[1][0]), tuple(cube_corners_2d[2][0]),red,line_width)
    cv2.line(img, tuple(cube_corners_2d[2][0]), tuple(cube_corners_2d[3][0]),red,line_width)
    cv2.line(img, tuple(cube_corners_2d[3][0]), tuple(cube_corners_2d[0][0]),red,line_width)

    #now draw the pillars
    cv2.line(img, tuple(cube_corners_2d[0][0]), tuple(cube_corners_2d[4][0]),blue,line_width)
    cv2.line(img, tuple(cube_corners_2d[1][0]), tuple(cube_corners_2d[5][0]),blue,line_width)
    cv2.line(img, tuple(cube_corners_2d[2][0]), tuple(cube_corners_2d[6][0]),blue,line_width)
    cv2.line(img, tuple(cube_corners_2d[3][0]), tuple(cube_corners_2d[7][0]),blue,line_width)

    #finally draw the top
    cv2.line(img, tuple(cube_corners_2d[4][0]), tuple(cube_corners_2d[5][0]),green,line_width)
    cv2.line(img, tuple(cube_corners_2d[5][0]), tuple(cube_corners_2d[6][0]),green,line_width)
    cv2.line(img, tuple(cube_corners_2d[6][0]), tuple(cube_corners_2d[7][0]),green,line_width)
    cv2.line(img, tuple(cube_corners_2d[7][0]), tuple(cube_corners_2d[4][0]),green,line_width)

    #cv2.line(img, tuple(start_point), tuple(end_point),(0,0,255),3) #we set the color to red (in BGR) and line width to 3
    plt.show()
    plt.subplot(221)
    plt.imshow(img[:,:])
    plt.subplot(224)
    plt.imshow(img[...,::-1])
    plt.show()


if __name__=="__main__":
    main()
