#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8
#
# Copyright © 2018 Cesar Sinchiguano <cesarsinchiguano@hotmail.es>
#
# Distributed under terms of the BSD license.

"""

"""
import numpy as np
from open3d import *

def main():
    print("Load a ply point cloud, print it, and render it")
    pcd = read_point_cloud("11.ply")
    '''    read_point_cloud reads a point cloud from a file.
        It tries to decode the file based on the extension name.
        The supported extension names are: pcd, ply, xyz, xyzrgb, xyzn, pts.'''
    pcd = read_point_cloud("TestData/fragment.ply")

    print(pcd)

    # print("Load a ply point cloud, print it, and render it")
    # pcd = read_point_cloud("bun0.pcd")
    # print(pcd)
    tmp=np.asarray(pcd.points)
    print(tmp[0:5,0:3])#rows and column
    #draw_geometries([pcd])

    print("Downsample the point cloud with a voxel of 0.005")
    downpcd = voxel_down_sample(pcd, voxel_size = 0.05)
    draw_geometries([downpcd])

    # print("Recompute the normal of the downsampled point cloud")
    estimate_normals(downpcd, search_param = KDTreeSearchParamHybrid(radius = 0.1, max_nn = 30))
    draw_geometries([downpcd])

    # print("Print a normal vector of the 0th point")
    # print(downpcd.normals[0])
    # print("Print the normal vectors of the first 10 points")
    # print(np.asarray(downpcd.normals)[:10,:])
    # print("")

    print("Load a polygon volume and use it to crop the original point cloud")
    vol = read_selection_polygon_volume("TestData/Crop/cropped.json")
    chair = vol.crop_point_cloud(pcd)
    #draw_geometries([chair])
    print("")

    print("Paint chair")
    chair.paint_uniform_color([1, 0.706, 0])
    #draw_geometries([chair])
    print("")

if __name__ == "__main__":
    main()
