# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from industrial_extrinsic_cal/camera_observer_triggerRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class camera_observer_triggerRequest(genpy.Message):
  _md5sum = "99a720387f531c43dab14bc7c2687396"
  _type = "industrial_extrinsic_cal/camera_observer_triggerRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
string image_topic
string instructions
uint32 roi_min_x
uint32 roi_min_y
uint32 roi_max_x
uint32 roi_max_y
"""
  __slots__ = ['image_topic','instructions','roi_min_x','roi_min_y','roi_max_x','roi_max_y']
  _slot_types = ['string','string','uint32','uint32','uint32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       image_topic,instructions,roi_min_x,roi_min_y,roi_max_x,roi_max_y

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(camera_observer_triggerRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.image_topic is None:
        self.image_topic = ''
      if self.instructions is None:
        self.instructions = ''
      if self.roi_min_x is None:
        self.roi_min_x = 0
      if self.roi_min_y is None:
        self.roi_min_y = 0
      if self.roi_max_x is None:
        self.roi_max_x = 0
      if self.roi_max_y is None:
        self.roi_max_y = 0
    else:
      self.image_topic = ''
      self.instructions = ''
      self.roi_min_x = 0
      self.roi_min_y = 0
      self.roi_max_x = 0
      self.roi_max_y = 0

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
      _x = self.image_topic
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.instructions
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4I().pack(_x.roi_min_x, _x.roi_min_y, _x.roi_max_x, _x.roi_max_y))
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
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image_topic = str[start:end].decode('utf-8')
      else:
        self.image_topic = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.instructions = str[start:end].decode('utf-8')
      else:
        self.instructions = str[start:end]
      _x = self
      start = end
      end += 16
      (_x.roi_min_x, _x.roi_min_y, _x.roi_max_x, _x.roi_max_y,) = _get_struct_4I().unpack(str[start:end])
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
      _x = self.image_topic
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.instructions
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4I().pack(_x.roi_min_x, _x.roi_min_y, _x.roi_max_x, _x.roi_max_y))
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
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image_topic = str[start:end].decode('utf-8')
      else:
        self.image_topic = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.instructions = str[start:end].decode('utf-8')
      else:
        self.instructions = str[start:end]
      _x = self
      start = end
      end += 16
      (_x.roi_min_x, _x.roi_min_y, _x.roi_max_x, _x.roi_max_y,) = _get_struct_4I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4I = None
def _get_struct_4I():
    global _struct_4I
    if _struct_4I is None:
        _struct_4I = struct.Struct("<4I")
    return _struct_4I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from industrial_extrinsic_cal/camera_observer_triggerResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class camera_observer_triggerResponse(genpy.Message):
  _md5sum = "13d5d28ceaaadbc975dd072a2e10b88a"
  _type = "industrial_extrinsic_cal/camera_observer_triggerResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
uint32 result

"""
  __slots__ = ['result']
  _slot_types = ['uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       result

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(camera_observer_triggerResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.result is None:
        self.result = 0
    else:
      self.result = 0

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
      buff.write(_get_struct_I().pack(self.result))
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
      end += 4
      (self.result,) = _get_struct_I().unpack(str[start:end])
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
      buff.write(_get_struct_I().pack(self.result))
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
      end += 4
      (self.result,) = _get_struct_I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
class camera_observer_trigger(object):
  _type          = 'industrial_extrinsic_cal/camera_observer_trigger'
  _md5sum = '47ad3ec1797cb1642f250ccac426d28b'
  _request_class  = camera_observer_triggerRequest
  _response_class = camera_observer_triggerResponse
