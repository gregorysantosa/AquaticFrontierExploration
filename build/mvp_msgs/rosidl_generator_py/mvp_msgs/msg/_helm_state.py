# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mvp_msgs:msg/HelmState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HelmState(type):
    """Metaclass of message 'HelmState'."""

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
            module = import_type_support('mvp_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mvp_msgs.msg.HelmState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__helm_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__helm_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__helm_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__helm_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__helm_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HelmState(metaclass=Metaclass_HelmState):
    """Message class 'HelmState'."""

    __slots__ = [
        '_name',
        '_mode',
        '_transitions',
        '_max_duration',
        '_exit_state',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'mode': 'string',
        'transitions': 'sequence<string>',
        'max_duration': 'double',
        'exit_state': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.mode = kwargs.get('mode', str())
        self.transitions = kwargs.get('transitions', [])
        self.max_duration = kwargs.get('max_duration', float())
        self.exit_state = kwargs.get('exit_state', str())

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
        if self.name != other.name:
            return False
        if self.mode != other.mode:
            return False
        if self.transitions != other.transitions:
            return False
        if self.max_duration != other.max_duration:
            return False
        if self.exit_state != other.exit_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value

    @builtins.property
    def transitions(self):
        """Message field 'transitions'."""
        return self._transitions

    @transitions.setter
    def transitions(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'transitions' field must be a set or sequence and each value of type 'str'"
        self._transitions = value

    @builtins.property
    def max_duration(self):
        """Message field 'max_duration'."""
        return self._max_duration

    @max_duration.setter
    def max_duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_duration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_duration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_duration = value

    @builtins.property
    def exit_state(self):
        """Message field 'exit_state'."""
        return self._exit_state

    @exit_state.setter
    def exit_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'exit_state' field must be of type 'str'"
        self._exit_state = value
