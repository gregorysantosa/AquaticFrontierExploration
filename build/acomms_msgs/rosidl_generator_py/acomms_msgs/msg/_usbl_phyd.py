# generated from rosidl_generator_py/resource/_idl.py.em
# with input from acomms_msgs:msg/UsblPhyd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UsblPhyd(type):
    """Metaclass of message 'UsblPhyd'."""

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
                'acomms_msgs.msg.UsblPhyd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__usbl_phyd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__usbl_phyd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__usbl_phyd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__usbl_phyd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__usbl_phyd

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


class UsblPhyd(metaclass=Metaclass_UsblPhyd):
    """Message class 'UsblPhyd'."""

    __slots__ = [
        '_header',
        '_current_time',
        '_measurement_time',
        '_remote_address',
        '_fix_type',
        '_delay_1_5',
        '_delay_2_5',
        '_delay_3_5',
        '_delay_4_5',
        '_delay_1_2',
        '_delay_4_1',
        '_delay_3_2',
        '_delay_3_4',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'current_time': 'float',
        'measurement_time': 'float',
        'remote_address': 'int32',
        'fix_type': 'boolean',
        'delay_1_5': 'int32',
        'delay_2_5': 'int32',
        'delay_3_5': 'int32',
        'delay_4_5': 'int32',
        'delay_1_2': 'int32',
        'delay_4_1': 'int32',
        'delay_3_2': 'int32',
        'delay_3_4': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.fix_type = kwargs.get('fix_type', bool())
        self.delay_1_5 = kwargs.get('delay_1_5', int())
        self.delay_2_5 = kwargs.get('delay_2_5', int())
        self.delay_3_5 = kwargs.get('delay_3_5', int())
        self.delay_4_5 = kwargs.get('delay_4_5', int())
        self.delay_1_2 = kwargs.get('delay_1_2', int())
        self.delay_4_1 = kwargs.get('delay_4_1', int())
        self.delay_3_2 = kwargs.get('delay_3_2', int())
        self.delay_3_4 = kwargs.get('delay_3_4', int())

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
        if self.fix_type != other.fix_type:
            return False
        if self.delay_1_5 != other.delay_1_5:
            return False
        if self.delay_2_5 != other.delay_2_5:
            return False
        if self.delay_3_5 != other.delay_3_5:
            return False
        if self.delay_4_5 != other.delay_4_5:
            return False
        if self.delay_1_2 != other.delay_1_2:
            return False
        if self.delay_4_1 != other.delay_4_1:
            return False
        if self.delay_3_2 != other.delay_3_2:
            return False
        if self.delay_3_4 != other.delay_3_4:
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
    def fix_type(self):
        """Message field 'fix_type'."""
        return self._fix_type

    @fix_type.setter
    def fix_type(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fix_type' field must be of type 'bool'"
        self._fix_type = value

    @builtins.property
    def delay_1_5(self):
        """Message field 'delay_1_5'."""
        return self._delay_1_5

    @delay_1_5.setter
    def delay_1_5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delay_1_5' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'delay_1_5' field must be an integer in [-2147483648, 2147483647]"
        self._delay_1_5 = value

    @builtins.property
    def delay_2_5(self):
        """Message field 'delay_2_5'."""
        return self._delay_2_5

    @delay_2_5.setter
    def delay_2_5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delay_2_5' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'delay_2_5' field must be an integer in [-2147483648, 2147483647]"
        self._delay_2_5 = value

    @builtins.property
    def delay_3_5(self):
        """Message field 'delay_3_5'."""
        return self._delay_3_5

    @delay_3_5.setter
    def delay_3_5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delay_3_5' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'delay_3_5' field must be an integer in [-2147483648, 2147483647]"
        self._delay_3_5 = value

    @builtins.property
    def delay_4_5(self):
        """Message field 'delay_4_5'."""
        return self._delay_4_5

    @delay_4_5.setter
    def delay_4_5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delay_4_5' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'delay_4_5' field must be an integer in [-2147483648, 2147483647]"
        self._delay_4_5 = value

    @builtins.property
    def delay_1_2(self):
        """Message field 'delay_1_2'."""
        return self._delay_1_2

    @delay_1_2.setter
    def delay_1_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delay_1_2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'delay_1_2' field must be an integer in [-2147483648, 2147483647]"
        self._delay_1_2 = value

    @builtins.property
    def delay_4_1(self):
        """Message field 'delay_4_1'."""
        return self._delay_4_1

    @delay_4_1.setter
    def delay_4_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delay_4_1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'delay_4_1' field must be an integer in [-2147483648, 2147483647]"
        self._delay_4_1 = value

    @builtins.property
    def delay_3_2(self):
        """Message field 'delay_3_2'."""
        return self._delay_3_2

    @delay_3_2.setter
    def delay_3_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delay_3_2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'delay_3_2' field must be an integer in [-2147483648, 2147483647]"
        self._delay_3_2 = value

    @builtins.property
    def delay_3_4(self):
        """Message field 'delay_3_4'."""
        return self._delay_3_4

    @delay_3_4.setter
    def delay_3_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delay_3_4' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'delay_3_4' field must be an integer in [-2147483648, 2147483647]"
        self._delay_3_4 = value
