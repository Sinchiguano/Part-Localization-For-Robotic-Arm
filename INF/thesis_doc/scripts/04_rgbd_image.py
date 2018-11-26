#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8
#
# Copyright © 2018 Cesar Sinchiguano <cesarsinchiguano@hotmail.es>
#
# Distributed under terms of the BSD license.

"""

"""
from open3d import *
import matplotlib.pyplot as plt

def main():
    print("Read Redwood dataset")
    color_raw = read_image("RGBD/color/00000.jpg")
    depth_raw = read_image("RGBD/depth/00000.png")
    rgbd_image = create_rgbd_image_from_color_and_depth(color_raw, depth_raw);

    print(rgbd_image)
    # plt.subplot(1, 2, 1)
    # plt.title('Redwood grayscale image')
    # plt.imshow(rgbd_image.color)
    # plt.subplot(1, 2, 2)
    # plt.title('Redwood depth image')
    # plt.imshow(rgbd_image.depth)
    # plt.show()
    pcd = create_point_cloud_from_rgbd_image(rgbd_image, PinholeCameraIntrinsic(PinholeCameraIntrinsicParameters.PrimeSenseDefault))
    # Flip it, otherwise the pointcloud will be upside down
    # pcd.transform([[1, 0, 0, 0], [0, -1, 0, 0], [0, 0, -1, 0], [0, 0, 0, 1]])
    # draw_geometries([pcd])
    print("Read SUN dataset")
    color_raw = read_image("RGBD/other_formats/SUN_color.jpg")
    depth_raw = read_image("RGBD/other_formats/SUN_depth.png")
    rgbd_image = create_rgbd_image_from_sun_format(color_raw, depth_raw);
    print(rgbd_image)
    plt.subplot(1, 2, 1)
    plt.title('SUN grayscale image')
    plt.imshow(rgbd_image.color)
    plt.subplot(1, 2, 2)
    plt.title('SUN depth image')
    plt.imshow(rgbd_image.depth)
    plt.show()
    pcd = create_point_cloud_from_rgbd_image(rgbd_image, PinholeCameraIntrinsic(
            PinholeCameraIntrinsicParameters.PrimeSenseDefault))
    # Flip it, otherwise the pointcloud will be upside down
    pcd.transform([[1, 0, 0, 0], [0, -1, 0, 0], [0, 0, -1, 0], [0, 0, 0, 1]])
    draw_geometries([pcd])


if __name__ == "__main__":
    main()
