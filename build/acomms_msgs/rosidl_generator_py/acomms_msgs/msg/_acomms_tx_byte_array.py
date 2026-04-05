# generated from rosidl_generator_py/resource/_idl.py.em
# with input from acomms_msgs:msg/AcommsTxByteArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AcommsTxByteArray(type):
    """Metaclass of message 'AcommsTxByteArray'."""

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
                'acomms_msgs.msg.AcommsTxByteArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__acomms_tx_byte_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__acomms_tx_byte_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__acomms_tx_byte_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__acomms_tx_byte_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__acomms_tx_byte_array

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from std_msgs.msg import UInt8MultiArray
            if UInt8MultiArray.__class__._TYPE_SUPPORT is None:
                UInt8MultiArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AcommsTxByteArray(metaclass=Metaclass_AcommsTxByteArray):
    """Message class 'AcommsTxByteArray'."""

    __slots__ = [
        '_header',
        '_subbuffer_id',
        '_msg',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'subbuffer_id': 'string',
        'msg': 'std_msgs/UInt8MultiArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8MultiArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.subbuffer_id = kwargs.get('subbuffer_id', str())
        from std_msgs.msg import UInt8MultiArray
        self.msg = kwargs.get('msg', UInt8MultiArray())

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
        if self.subbuffer_id != other.subbuffer_id:
            return False
        if self.msg != other.msg:
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
    def subbuffer_id(self):
        """Message field 'subbuffer_id'."""
        return self._subbuffer_id

    @subbuffer_id.setter
    def subbuffer_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'subbuffer_id' field must be of type 'str'"
        self._subbuffer_id = value

    @builtins.property
    def msg(self):
        """Message field 'msg'."""
        return self._msg

    @msg.setter
    def msg(self, value):
        if __debug__:
            from std_msgs.msg import UInt8MultiArray
            assert \
                isinstance(value, UInt8MultiArray), \
                "The 'msg' field must be a sub message of type 'UInt8MultiArray'"
        self._msg = value
