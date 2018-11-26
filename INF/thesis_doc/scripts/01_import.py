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

def example_import_function():
    from open3d import read_point_cloud
    pcd = read_point_cloud("bun0.pcd")
    print(pcd)
    write_point_cloud("copy_of_fragment.pcd", pcd)
    print("Testing IO for images ...")
    img = read_image("one.jpg")
    print(img)

def example_help_function():
    print('Cesar Sinchiguano!!!')
    import open3d
    help(open3d)
    # help(open3d.PointCloud)
    # help(open3d.read_point_cloud)

if __name__ == "__main__":
    example_import_function()
    #example_help_function()
