## *********************************************************
##
## File autogenerated for the realsense2_camera package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 245, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 290, 'description': 'Gain', 'max': 248, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_depth_gain', 'edit_method': '', 'default': 16, 'level': 1, 'min': 16, 'type': 'int'}, {'srcline': 290, 'description': 'Enable Auto Exposure', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_depth_enable_auto_exposure', 'edit_method': '', 'default': True, 'level': 2, 'min': False, 'type': 'bool'}, {'srcline': 290, 'description': 'D400 Visual Presets', 'max': 5, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_depth_visual_preset', 'edit_method': "{'enum_description': 'D400 Visual Presets', 'enum': [{'srcline': 11, 'description': 'Custom', 'srcfile': '/home/casch/yumi_ws/src/realPACK/realsense2_camera/cfg/base_d400_params.py', 'cconsttype': 'const int', 'value': 0, 'ctype': 'int', 'type': 'int', 'name': 'Custom'}, {'srcline': 12, 'description': 'Default Preset', 'srcfile': '/home/casch/yumi_ws/src/realPACK/realsense2_camera/cfg/base_d400_params.py', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'Default'}, {'srcline': 13, 'description': 'Hand Gesture', 'srcfile': '/home/casch/yumi_ws/src/realPACK/realsense2_camera/cfg/base_d400_params.py', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'Hand'}, {'srcline': 14, 'description': 'High Accuracy', 'srcfile': '/home/casch/yumi_ws/src/realPACK/realsense2_camera/cfg/base_d400_params.py', 'cconsttype': 'const int', 'value': 3, 'ctype': 'int', 'type': 'int', 'name': 'HighAccuracy'}, {'srcline': 15, 'description': 'High Density', 'srcfile': '/home/casch/yumi_ws/src/realPACK/realsense2_camera/cfg/base_d400_params.py', 'cconsttype': 'const int', 'value': 4, 'ctype': 'int', 'type': 'int', 'name': 'HighDensity'}, {'srcline': 16, 'description': 'Medium Density', 'srcfile': '/home/casch/yumi_ws/src/realPACK/realsense2_camera/cfg/base_d400_params.py', 'cconsttype': 'const int', 'value': 5, 'ctype': 'int', 'type': 'int', 'name': 'MediumDensity'}]}", 'default': 0, 'level': 3, 'min': 0, 'type': 'int'}, {'srcline': 290, 'description': 'Frames Queue Size', 'max': 32, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_depth_frames_queue_size', 'edit_method': '', 'default': 16, 'level': 4, 'min': 0, 'type': 'int'}, {'srcline': 290, 'description': 'Error Polling Enabled', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_depth_error_polling_enabled', 'edit_method': '', 'default': False, 'level': 5, 'min': False, 'type': 'bool'}, {'srcline': 290, 'description': 'Output Trigger Enabled', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_depth_output_trigger_enabled', 'edit_method': '', 'default': False, 'level': 6, 'min': False, 'type': 'bool'}, {'srcline': 290, 'description': 'Depth Units', 'max': 0.001, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_depth_units', 'edit_method': '', 'default': 0.001, 'level': 7, 'min': 0.001, 'type': 'double'}, {'srcline': 290, 'description': 'Sensors Enabled', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_sensors_enabled', 'edit_method': '', 'default': True, 'level': 8, 'min': False, 'type': 'bool'}, {'srcline': 290, 'description': 'JSON_file_path', 'max': '', 'cconsttype': 'const char * const', 'ctype': 'std::string', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_JSON_file_path', 'edit_method': '', 'default': '', 'level': 9, 'min': '', 'type': 'str'}, {'srcline': 290, 'description': 'Exposure', 'max': 8300, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_depth_exposure', 'edit_method': '', 'default': 425, 'level': 9, 'min': 1, 'type': 'int'}, {'srcline': 290, 'description': 'Laser Power', 'max': 12.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_depth_laser_power', 'edit_method': '', 'default': 12.5, 'level': 10, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'Depth Emitter Enabled', 'max': 2, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_depth_emitter_enabled', 'edit_method': "{'enum_description': 'Depth Emitter', 'enum': [{'srcline': 17, 'description': 'Off', 'srcfile': '/home/casch/yumi_ws/src/realPACK/realsense2_camera/cfg/rs435_params.cfg', 'cconsttype': 'const int', 'value': 0, 'ctype': 'int', 'type': 'int', 'name': 'Off'}, {'srcline': 18, 'description': 'On', 'srcfile': '/home/casch/yumi_ws/src/realPACK/realsense2_camera/cfg/rs435_params.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'On'}, {'srcline': 19, 'description': 'Auto', 'srcfile': '/home/casch/yumi_ws/src/realPACK/realsense2_camera/cfg/rs435_params.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'Auto'}]}", 'default': 1, 'level': 11, 'min': 0, 'type': 'int'}, {'srcline': 290, 'description': 'Backlight Compensation', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_backlight_compensation', 'edit_method': '', 'default': False, 'level': 12, 'min': False, 'type': 'bool'}, {'srcline': 290, 'description': 'Brightness', 'max': 64, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_brightness', 'edit_method': '', 'default': 0, 'level': 13, 'min': -64, 'type': 'int'}, {'srcline': 290, 'description': 'Contrast', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_contrast', 'edit_method': '', 'default': 50, 'level': 14, 'min': 0, 'type': 'int'}, {'srcline': 290, 'description': 'Exposure', 'max': 10000, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_exposure', 'edit_method': '', 'default': 166, 'level': 15, 'min': 41, 'type': 'int'}, {'srcline': 290, 'description': 'Gain', 'max': 128, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_gain', 'edit_method': '', 'default': 64, 'level': 16, 'min': 0, 'type': 'int'}, {'srcline': 290, 'description': 'Gamma', 'max': 500, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_gamma', 'edit_method': '', 'default': 300, 'level': 17, 'min': 100, 'type': 'int'}, {'srcline': 290, 'description': 'Hue', 'max': 180, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_hue', 'edit_method': '', 'default': 0, 'level': 18, 'min': -180, 'type': 'int'}, {'srcline': 290, 'description': 'Saturation', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_saturation', 'edit_method': '', 'default': 64, 'level': 19, 'min': 0, 'type': 'int'}, {'srcline': 290, 'description': 'Sharpness', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_sharpness', 'edit_method': '', 'default': 50, 'level': 20, 'min': 0, 'type': 'int'}, {'srcline': 290, 'description': 'White Balance', 'max': 650, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_white_balance', 'edit_method': '', 'default': 460, 'level': 21, 'min': 280, 'type': 'int'}, {'srcline': 290, 'description': 'Enable Auto Exposure', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_enable_auto_exposure', 'edit_method': '', 'default': True, 'level': 22, 'min': False, 'type': 'bool'}, {'srcline': 290, 'description': 'Frames Queue Size', 'max': 32, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_frames_queue_size', 'edit_method': '', 'default': 16, 'level': 23, 'min': 0, 'type': 'int'}, {'srcline': 290, 'description': 'Power Line Frequency', 'max': 3, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_power_line_frequency', 'edit_method': "{'enum_description': 'Power Line Frequency', 'enum': [{'srcline': 34, 'description': 'Disable', 'srcfile': '/home/casch/yumi_ws/src/realPACK/realsense2_camera/cfg/rs435_params.cfg', 'cconsttype': 'const int', 'value': 0, 'ctype': 'int', 'type': 'int', 'name': 'Disable'}, {'srcline': 35, 'description': '50Hz', 'srcfile': '/home/casch/yumi_ws/src/realPACK/realsense2_camera/cfg/rs435_params.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': '50Hz'}, {'srcline': 36, 'description': '60Hz', 'srcfile': '/home/casch/yumi_ws/src/realPACK/realsense2_camera/cfg/rs435_params.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': '60Hz'}, {'srcline': 37, 'description': 'Auto Frequency', 'srcfile': '/home/casch/yumi_ws/src/realPACK/realsense2_camera/cfg/rs435_params.cfg', 'cconsttype': 'const int', 'value': 3, 'ctype': 'int', 'type': 'int', 'name': 'AutoFrequency'}]}", 'default': 3, 'level': 24, 'min': 0, 'type': 'int'}, {'srcline': 290, 'description': 'Auto Exposure Priority', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'rs435_color_auto_exposure_priority', 'edit_method': '', 'default': False, 'level': 25, 'min': False, 'type': 'bool'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

rs435_params_Custom = 0
rs435_params_Default = 1
rs435_params_Hand = 2
rs435_params_HighAccuracy = 3
rs435_params_HighDensity = 4
rs435_params_MediumDensity = 5
rs435_params_Off = 0
rs435_params_On = 1
rs435_params_Auto = 2
rs435_params_Disable = 0
rs435_params_50Hz = 1
rs435_params_60Hz = 2
rs435_params_AutoFrequency = 3
