# generated from rosidl_generator_py/resource/_idl.py.em
# with input from co_lrio:msg/OptimizationResponse.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OptimizationResponse(type):
    """Metaclass of message 'OptimizationResponse'."""

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
                'co_lrio.msg.OptimizationResponse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__optimization_response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__optimization_response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__optimization_response
            cls._TYPE_SUPPORT = module.type_support_msg__msg__optimization_response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__optimization_response

            from nav_msgs.msg import Odometry
            if Odometry.__class__._TYPE_SUPPORT is None:
                Odometry.__class__.__import_type_support__()

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


class OptimizationResponse(metaclass=Metaclass_OptimizationResponse):
    """Message class 'OptimizationResponse'."""

    __slots__ = [
        '_header',
        '_robot_id',
        '_index_to',
        '_pose_to',
        '_update_keyposes',
        '_keyposes',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'robot_id': 'int32',
        'index_to': 'int64',
        'pose_to': 'nav_msgs/Odometry',
        'update_keyposes': 'boolean',
        'keyposes': 'sensor_msgs/PointCloud2',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Odometry'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.robot_id = kwargs.get('robot_id', int())
        self.index_to = kwargs.get('index_to', int())
        from nav_msgs.msg import Odometry
        self.pose_to = kwargs.get('pose_to', Odometry())
        self.update_keyposes = kwargs.get('update_keyposes', bool())
        from sensor_msgs.msg import PointCloud2
        self.keyposes = kwargs.get('keyposes', PointCloud2())

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
        if self.robot_id != other.robot_id:
            return False
        if self.index_to != other.index_to:
            return False
        if self.pose_to != other.pose_to:
            return False
        if self.update_keyposes != other.update_keyposes:
            return False
        if self.keyposes != other.keyposes:
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
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'robot_id' field must be an integer in [-2147483648, 2147483647]"
        self._robot_id = value

    @property
    def index_to(self):
        """Message field 'index_to'."""
        return self._index_to

    @index_to.setter
    def index_to(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index_to' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'index_to' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._index_to = value

    @property
    def pose_to(self):
        """Message field 'pose_to'."""
        return self._pose_to

    @pose_to.setter
    def pose_to(self, value):
        if __debug__:
            from nav_msgs.msg import Odometry
            assert \
                isinstance(value, Odometry), \
                "The 'pose_to' field must be a sub message of type 'Odometry'"
        self._pose_to = value

    @property
    def update_keyposes(self):
        """Message field 'update_keyposes'."""
        return self._update_keyposes

    @update_keyposes.setter
    def update_keyposes(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'update_keyposes' field must be of type 'bool'"
        self._update_keyposes = value

    @property
    def keyposes(self):
        """Message field 'keyposes'."""
        return self._keyposes

    @keyposes.setter
    def keyposes(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'keyposes' field must be a sub message of type 'PointCloud2'"
        self._keyposes = value