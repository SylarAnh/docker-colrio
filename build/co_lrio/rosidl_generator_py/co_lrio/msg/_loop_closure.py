# generated from rosidl_generator_py/resource/_idl.py.em
# with input from co_lrio:msg/LoopClosure.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LoopClosure(type):
    """Metaclass of message 'LoopClosure'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('co_lrio')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'co_lrio.msg.LoopClosure')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__loop_closure
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__loop_closure
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__loop_closure
            cls._TYPE_SUPPORT = module.type_support_msg__msg__loop_closure
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__loop_closure

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LoopClosure(metaclass=Metaclass_LoopClosure):
    """Message class 'LoopClosure'."""

    __slots__ = [
        '_header',
        '_robot0',
        '_key0',
        '_robot1',
        '_key1',
        '_yaw_diff',
        '_frame',
        '_noise',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'robot0': 'uint8',
        'key0': 'int32',
        'robot1': 'uint8',
        'key1': 'int32',
        'yaw_diff': 'int32',
        'frame': 'sensor_msgs/PointCloud2',
        'noise': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.robot0 = kwargs.get('robot0', int())
        self.key0 = kwargs.get('key0', int())
        self.robot1 = kwargs.get('robot1', int())
        self.key1 = kwargs.get('key1', int())
        self.yaw_diff = kwargs.get('yaw_diff', int())
        from sensor_msgs.msg import PointCloud2
        self.frame = kwargs.get('frame', PointCloud2())
        self.noise = kwargs.get('noise', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.robot0 != other.robot0:
            return False
        if self.key0 != other.key0:
            return False
        if self.robot1 != other.robot1:
            return False
        if self.key1 != other.key1:
            return False
        if self.yaw_diff != other.yaw_diff:
            return False
        if self.frame != other.frame:
            return False
        if self.noise != other.noise:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def robot0(self):
        """Message field 'robot0'."""
        return self._robot0

    @robot0.setter
    def robot0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot0' field must be an unsigned integer in [0, 255]"
        self._robot0 = value

    @property
    def key0(self):
        """Message field 'key0'."""
        return self._key0

    @key0.setter
    def key0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'key0' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'key0' field must be an integer in [-2147483648, 2147483647]"
        self._key0 = value

    @property
    def robot1(self):
        """Message field 'robot1'."""
        return self._robot1

    @robot1.setter
    def robot1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot1' field must be an unsigned integer in [0, 255]"
        self._robot1 = value

    @property
    def key1(self):
        """Message field 'key1'."""
        return self._key1

    @key1.setter
    def key1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'key1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'key1' field must be an integer in [-2147483648, 2147483647]"
        self._key1 = value

    @property
    def yaw_diff(self):
        """Message field 'yaw_diff'."""
        return self._yaw_diff

    @yaw_diff.setter
    def yaw_diff(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yaw_diff' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'yaw_diff' field must be an integer in [-2147483648, 2147483647]"
        self._yaw_diff = value

    @property
    def frame(self):
        """Message field 'frame'."""
        return self._frame

    @frame.setter
    def frame(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'frame' field must be a sub message of type 'PointCloud2'"
        self._frame = value

    @property
    def noise(self):
        """Message field 'noise'."""
        return self._noise

    @noise.setter
    def noise(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'noise' field must be of type 'float'"
        self._noise = value
