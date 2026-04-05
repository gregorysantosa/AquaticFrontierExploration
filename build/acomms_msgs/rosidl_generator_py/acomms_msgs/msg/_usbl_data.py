# generated from rosidl_generator_py/resource/_idl.py.em
# with input from acomms_msgs:msg/UsblData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UsblData(type):
    """Metaclass of message 'UsblData'."""

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
            module = import_type_support('acomms_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'acomms_msgs.msg.UsblData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__usbl_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__usbl_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__usbl_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__usbl_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__usbl_data

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

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


class UsblData(metaclass=Metaclass_UsblData):
    """Message class 'UsblData'."""

    __slots__ = [
        '_header',
        '_current_time',
        '_measurement_time',
        '_remote_address',
        '_xyz',
        '_enu',
        '_orientation',
        '_propagation_time',
        '_rssi',
        '_integrity',
        '_accuracy',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'current_time': 'float',
        'measurement_time': 'float',
        'remote_address': 'int32',
        'xyz': 'geometry_msgs/Vector3',
        'enu': 'geometry_msgs/Vector3',
        'orientation': 'geometry_msgs/Quaternion',
        'propagation_time': 'float',
        'rssi': 'int32',
        'integrity': 'int32',
        'accuracy': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.current_time = kwargs.get('current_time', float())
        self.measurement_time = kwargs.get('measurement_time', float())
        self.remote_address = kwargs.get('remote_address', int())
        from geometry_msgs.msg import Vector3
        self.xyz = kwargs.get('xyz', Vector3())
        from geometry_msgs.msg import Vector3
        self.enu = kwargs.get('enu', Vector3())
        from geometry_msgs.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        self.propagation_time = kwargs.get('propagation_time', float())
        self.rssi = kwargs.get('rssi', int())
        self.integrity = kwargs.get('integrity', int())
        self.accuracy = kwargs.get('accuracy', float())

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
        if self.current_time != other.current_time:
            return False
        if self.measurement_time != other.measurement_time:
            return False
        if self.remote_address != other.remote_address:
            return False
        if self.xyz != other.xyz:
            return False
        if self.enu != other.enu:
            return False
        if self.orientation != other.orientation:
            return False
        if self.propagation_time != other.propagation_time:
            return False
        if self.rssi != other.rssi:
            return False
        if self.integrity != other.integrity:
            return False
        if self.accuracy != other.accuracy:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
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

    @builtins.property
    def current_time(self):
        """Message field 'current_time'."""
        return self._current_time

    @current_time.setter
    def current_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_time = value

    @builtins.property
    def measurement_time(self):
        """Message field 'measurement_time'."""
        return self._measurement_time

    @measurement_time.setter
    def measurement_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'measurement_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'measurement_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._measurement_time = value

    @builtins.property
    def remote_address(self):
        """Message field 'remote_address'."""
        return self._remote_address

    @remote_address.setter
    def remote_address(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remote_address' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'remote_address' field must be an integer in [-2147483648, 2147483647]"
        self._remote_address = value

    @builtins.property
    def xyz(self):
        """Message field 'xyz'."""
        return self._xyz

    @xyz.setter
    def xyz(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'xyz' field must be a sub message of type 'Vector3'"
        self._xyz = value

    @builtins.property
    def enu(self):
        """Message field 'enu'."""
        return self._enu

    @enu.setter
    def enu(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'enu' field must be a sub message of type 'Vector3'"
        self._enu = value

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'orientation' field must be a sub message of type 'Quaternion'"
        self._orientation = value

    @builtins.property
    def propagation_time(self):
        """Message field 'propagation_time'."""
        return self._propagation_time

    @propagation_time.setter
    def propagation_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'propagation_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'propagation_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._propagation_time = value

    @builtins.property
    def rssi(self):
        """Message field 'rssi'."""
        return self._rssi

    @rssi.setter
    def rssi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rssi' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rssi' field must be an integer in [-2147483648, 2147483647]"
        self._rssi = value

    @builtins.property
    def integrity(self):
        """Message field 'integrity'."""
        return self._integrity

    @integrity.setter
    def integrity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'integrity' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'integrity' field must be an integer in [-2147483648, 2147483647]"
        self._integrity = value

    @builtins.property
    def accuracy(self):
        """Message field 'accuracy'."""
        return self._accuracy

    @accuracy.setter
    def accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accuracy = value
