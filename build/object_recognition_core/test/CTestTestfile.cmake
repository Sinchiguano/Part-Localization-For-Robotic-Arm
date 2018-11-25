# CMake generated Testfile for 
# Source directory: /home/casch/yumi_ws/src/object_recognition_core/test
# Build directory: /home/casch/yumi_ws/build/object_recognition_core/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(object_recognition_core_test_import.py "/home/casch/yumi_ws/devel/share/object_recognition_core/cmake/../test/run_test.sh" "/home/casch/yumi_ws/devel/setup.sh" "/home/casch/yumi_ws/src/object_recognition_core/test/test_import.py")
add_test(object_recognition_core_test_config.py "/home/casch/yumi_ws/devel/share/object_recognition_core/cmake/../test/run_test.sh" "/home/casch/yumi_ws/devel/setup.sh" "/home/casch/yumi_ws/src/object_recognition_core/test/test_config.py")
add_test(object_recognition_core_help_/home/casch/yumi_ws/src/object_recognition_core/test/../apps/detection "/home/casch/yumi_ws/devel/share/object_recognition_core/cmake/../test/run_test.sh" "/home/casch/yumi_ws/devel/setup.sh" "/home/casch/yumi_ws/devel/share/object_recognition_core/cmake/../test/test_help.py /home/casch/yumi_ws/src/object_recognition_core/test/../apps/detection")
add_test(object_recognition_core_help_/home/casch/yumi_ws/src/object_recognition_core/test/../apps/training "/home/casch/yumi_ws/devel/share/object_recognition_core/cmake/../test/run_test.sh" "/home/casch/yumi_ws/devel/setup.sh" "/home/casch/yumi_ws/devel/share/object_recognition_core/cmake/../test/test_help.py /home/casch/yumi_ws/src/object_recognition_core/test/../apps/training")
add_test(object_recognition_core_source_OpenNI "/home/casch/yumi_ws/devel/share/object_recognition_core/cmake/../test/run_test.sh" "/home/casch/yumi_ws/devel/setup.sh" "/home/casch/yumi_ws/devel/share/object_recognition_core/cmake/../test/test_source.py OpenNI object_recognition_core.io {}")
add_test(object_recognition_core_sink_GuessCsvWriter "/home/casch/yumi_ws/devel/share/object_recognition_core/cmake/../test/run_test.sh" "/home/casch/yumi_ws/devel/setup.sh" "/home/casch/yumi_ws/devel/share/object_recognition_core/cmake/../test/test_sink.py GuessCsvWriter object_recognition_core.io {}")
add_test(object_recognition_core_/home/casch/yumi_ws/src/object_recognition_core/test/detection.test.ork "/home/casch/yumi_ws/devel/share/object_recognition_core/cmake/../test/run_test.sh" "/home/casch/yumi_ws/devel/setup.sh" "/home/casch/yumi_ws/devel/share/object_recognition_core/cmake/../test/test_config.py -c /home/casch/yumi_ws/src/object_recognition_core/test/detection.test.ork")
subdirs(db)
