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

import numpy as np
from matplotlib import pyplot as plt


image_left = cv2.imread('left01.jpg')
image_right = cv2.imread('right01.jpg')
print('Cesar Sinchiguano!!!')

def show_image(temp1, temp2):

    plt.subplot(221)
    plt.imshow(temp1[:,:])
    plt.subplot(224)
    plt.imshow(temp2[:,:])
    plt.show()


def main():
    # print(image_left.shape)
    # print(image_right.shape)
    # print(type(image_left))
    # print(image_left[0:5,0:2])
    #show_image(image_left,image_right)
    ret, corners = cv2.findChessboardCorners(image_left, (7,6))
    # print(corners.shape)
    # print(corners[:2,:])
    # print(corners[0])



    corners=corners.reshape(-1,2)
    # print corners.shape
    # print corners[0]

    # im_left_vis=image_left.copy()
    # cv2.drawChessboardCorners(im_left_vis, (7,6), corners, ret)
    # plt.imshow(im_left_vis)
    # plt.show()



    x,y=np.meshgrid(range(7),range(6))
    # print "x:\n",x
    # print "y:\n",y

    world_points=np.hstack((x.reshape(42,1),y.reshape(42,1),np.zeros((42,1)))).astype(np.float32)
    # print world_points

    # print corners[0],'->',world_points[0]
    # print corners[35],'->',world_points[35]


if __name__=="__main__":
    main()
