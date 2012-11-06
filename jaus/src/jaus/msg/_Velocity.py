"""autogenerated by genpy from jaus/Velocity.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Velocity(genpy.Message):
  _md5sum = "8de9a9274155344335ec8e399f30e54a"
  _type = "jaus/Velocity"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 xrate
float64 yrate
float64 zrate

float64 rollrate
float64 pitchrate
float64 yawrate

"""
  __slots__ = ['xrate','yrate','zrate','rollrate','pitchrate','yawrate']
  _slot_types = ['float64','float64','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       xrate,yrate,zrate,rollrate,pitchrate,yawrate

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Velocity, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.xrate is None:
        self.xrate = 0.
      if self.yrate is None:
        self.yrate = 0.
      if self.zrate is None:
        self.zrate = 0.
      if self.rollrate is None:
        self.rollrate = 0.
      if self.pitchrate is None:
        self.pitchrate = 0.
      if self.yawrate is None:
        self.yawrate = 0.
    else:
      self.xrate = 0.
      self.yrate = 0.
      self.zrate = 0.
      self.rollrate = 0.
      self.pitchrate = 0.
      self.yawrate = 0.

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
      buff.write(_struct_6d.pack(_x.xrate, _x.yrate, _x.zrate, _x.rollrate, _x.pitchrate, _x.yawrate))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 48
      (_x.xrate, _x.yrate, _x.zrate, _x.rollrate, _x.pitchrate, _x.yawrate,) = _struct_6d.unpack(str[start:end])
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
      buff.write(_struct_6d.pack(_x.xrate, _x.yrate, _x.zrate, _x.rollrate, _x.pitchrate, _x.yawrate))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 48
      (_x.xrate, _x.yrate, _x.zrate, _x.rollrate, _x.pitchrate, _x.yawrate,) = _struct_6d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_6d = struct.Struct("<6d")