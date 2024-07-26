# generated from rosidl_generator_py/resource/_idl.py.em
# with input from co_lrio:msg/OptimizationRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'other_ids'
# Member 'distances'
# Member 'descriptor_vec'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OptimizationRequest(type):
    """Metaclass of message 'OptimizationRequest'."""

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
                'co_lrio.msg.OptimizationRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__optimization_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__optimization_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__optimization_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__optimization_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__optimization_request

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


class OptimizationRequest(metaclass=Metaclass_OptimizationRequest):
    """Message class 'OptimizationRequest'."""

    __slots__ = [
        '_header',
        '_robot_id',
        '_keyframe',
        '_index_to',
        '_pose_to',
        '_index_from',
        '_pose_from',
        '_noise',
        '_other_ids',
        '_distances',
        '_descriptor_vec',
        '_gps_valid',
        '_gps_odom',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'robot_id': 'uint8',
        'keyframe': 'sensor_msgs/PointCloud2',
        'index_to': 'int64',
        'pose_to': 'nav_msgs/Odometry',
        'index_from': 'int64',
        'pose_from': 'nav_msgs/Odometry',
        'noise': 'float',
        'other_ids': 'sequence<int32>',
        'distances': 'sequence<float>',
        'descriptor_vec': 'sequence<float>',
        'gps_valid': 'int32',
        'gps_odom': 'nav_msgs/Odometry',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Odometry'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Odometry'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Odometry'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.robot_id = kwargs.get('robot_id', int())
        from sensor_msgs.msg import PointCloud2
        self.keyframe = kwargs.get('keyframe', PointCloud2())
        self.index_to = kwargs.get('index_to', int())
        from nav_msgs.msg import Odometry
        self.pose_to = kwargs.get('pose_to', Odometry())
        self.index_from = kwargs.get('index_from', int())
        from nav_msgs.msg import Odometry
        self.pose_from = kwargs.get('pose_from', Odometry())
        self.noise = kwargs.get('noise', float())
        self.other_ids = array.array('i', kwargs.get('other_ids', []))
        self.distances = array.array('f', kwargs.get('distances', []))
        self.descriptor_vec = array.array('f', kwargs.get('descriptor_vec', []))
        self.gps_valid = kwargs.get('gps_valid', int())
        from nav_msgs.msg import Odometry
        self.gps_odom = kwargs.get('gps_odom', Odometry())

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
        if self.keyframe != other.keyframe:
            return False
        if self.index_to != other.index_to:
            return False
        if self.pose_to != other.pose_to:
            return False
        if self.index_from != other.index_from:
            return False
        if self.pose_from != other.pose_from:
            return False
        if self.noise != other.noise:
            return False
        if self.other_ids != other.other_ids:
            return False
        if self.distances != other.distances:
            return False
        if self.descriptor_vec != other.descriptor_vec:
            return False
        if self.gps_valid != other.gps_valid:
            return False
        if self.gps_odom != other.gps_odom:
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
            assert value >= 0 and value < 256, \
                "The 'robot_id' field must be an unsigned integer in [0, 255]"
        self._robot_id = value

    @property
    def keyframe(self):
        """Message field 'keyframe'."""
        return self._keyframe

    @keyframe.setter
    def keyframe(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'keyframe' field must be a sub message of type 'PointCloud2'"
        self._keyframe = value

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
    def index_from(self):
        """Message field 'index_from'."""
        return self._index_from

    @index_from.setter
    def index_from(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index_from' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'index_from' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._index_from = value

    @property
    def pose_from(self):
        """Message field 'pose_from'."""
        return self._pose_from

    @pose_from.setter
    def pose_from(self, value):
        if __debug__:
            from nav_msgs.msg import Odometry
            assert \
                isinstance(value, Odometry), \
                "The 'pose_from' field must be a sub message of type 'Odometry'"
        self._pose_from = value

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

    @property
    def other_ids(self):
        """Message field 'other_ids'."""
        return self._other_ids

    @other_ids.setter
    def other_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'other_ids' array.array() must have the type code of 'i'"
            self._other_ids = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'other_ids' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._other_ids = array.array('i', value)

    @property
    def distances(self):
        """Message field 'distances'."""
        return self._distances

    @distances.setter
    def distances(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'distances' array.array() must have the type code of 'f'"
            self._distances = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'distances' field must be a set or sequence and each value of type 'float'"
        self._distances = array.array('f', value)

    @property
    def descriptor_vec(self):
        """Message field 'descriptor_vec'."""
        return self._descriptor_vec

    @descriptor_vec.setter
    def descriptor_vec(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'descriptor_vec' array.array() must have the type code of 'f'"
            self._descriptor_vec = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'descriptor_vec' field must be a set or sequence and each value of type 'float'"
        self._descriptor_vec = array.array('f', value)

    @property
    def gps_valid(self):
        """Message field 'gps_valid'."""
        return self._gps_valid

    @gps_valid.setter
    def gps_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_valid' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gps_valid' field must be an integer in [-2147483648, 2147483647]"
        self._gps_valid = value

    @property
    def gps_odom(self):
        """Message field 'gps_odom'."""
        return self._gps_odom

    @gps_odom.setter
    def gps_odom(self, value):
        if __debug__:
            from nav_msgs.msg import Odometry
            assert \
                isinstance(value, Odometry), \
                "The 'gps_odom' field must be a sub message of type 'Odometry'"
        self._gps_odom = value
