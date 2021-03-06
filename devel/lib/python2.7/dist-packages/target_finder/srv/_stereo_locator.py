# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from target_finder/stereo_locatorRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class stereo_locatorRequest(genpy.Message):
  _md5sum = "018b5c6376abafbce2c3211a0d675d06"
  _type = "target_finder/stereo_locatorRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 allowable_cost_per_observation
"""
  __slots__ = ['allowable_cost_per_observation']
  _slot_types = ['float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       allowable_cost_per_observation

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(stereo_locatorRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.allowable_cost_per_observation is None:
        self.allowable_cost_per_observation = 0.
    else:
      self.allowable_cost_per_observation = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_get_struct_d().pack(self.allowable_cost_per_observation))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 8
      (self.allowable_cost_per_observation,) = _get_struct_d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_get_struct_d().pack(self.allowable_cost_per_observation))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 8
      (self.allowable_cost_per_observation,) = _get_struct_d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_d = None
def _get_struct_d():
    global _struct_d
    if _struct_d is None:
        _struct_d = struct.Struct("<d")
    return _struct_d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from target_finder/stereo_locatorResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class stereo_locatorResponse(genpy.Message):
  _md5sum = "666e1abcd41243317c29d57ff72dde2d"
  _type = "target_finder/stereo_locatorResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 final_cost_per_observation
geometry_msgs/Pose target_pose

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['final_cost_per_observation','target_pose']
  _slot_types = ['float64','geometry_msgs/Pose']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       final_cost_per_observation,target_pose

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(stereo_locatorResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.final_cost_per_observation is None:
        self.final_cost_per_observation = 0.
      if self.target_pose is None:
        self.target_pose = geometry_msgs.msg.Pose()
    else:
      self.final_cost_per_observation = 0.
      self.target_pose = geometry_msgs.msg.Pose()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_8d().pack(_x.final_cost_per_observation, _x.target_pose.position.x, _x.target_pose.position.y, _x.target_pose.position.z, _x.target_pose.orientation.x, _x.target_pose.orientation.y, _x.target_pose.orientation.z, _x.target_pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.target_pose is None:
        self.target_pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 64
      (_x.final_cost_per_observation, _x.target_pose.position.x, _x.target_pose.position.y, _x.target_pose.position.z, _x.target_pose.orientation.x, _x.target_pose.orientation.y, _x.target_pose.orientation.z, _x.target_pose.orientation.w,) = _get_struct_8d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_8d().pack(_x.final_cost_per_observation, _x.target_pose.position.x, _x.target_pose.position.y, _x.target_pose.position.z, _x.target_pose.orientation.x, _x.target_pose.orientation.y, _x.target_pose.orientation.z, _x.target_pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.target_pose is None:
        self.target_pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 64
      (_x.final_cost_per_observation, _x.target_pose.position.x, _x.target_pose.position.y, _x.target_pose.position.z, _x.target_pose.orientation.x, _x.target_pose.orientation.y, _x.target_pose.orientation.z, _x.target_pose.orientation.w,) = _get_struct_8d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_8d = None
def _get_struct_8d():
    global _struct_8d
    if _struct_8d is None:
        _struct_8d = struct.Struct("<8d")
    return _struct_8d
class stereo_locator(object):
  _type          = 'target_finder/stereo_locator'
  _md5sum = '6f3a39428e04dd9b7fb7338eb3f220f5'
  _request_class  = stereo_locatorRequest
  _response_class = stereo_locatorResponse
