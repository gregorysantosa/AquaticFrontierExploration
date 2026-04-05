# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mvp_msgs:srv/GetControlMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetControlMode_Request(type):
    """Metaclass of message 'GetControlMode_Request'."""

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
                'mvp_msgs.srv.GetControlMode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_control_mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_control_mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_control_mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_control_mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_control_mode__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetControlMode_Request(metaclass=Metaclass_GetControlMode_Request):
    """Message class 'GetControlMode_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetControlMode_Response(type):
    """Metaclass of message 'GetControlMode_Response'."""

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
                'mvp_msgs.srv.GetControlMode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_control_mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_control_mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_control_mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_control_mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_control_mode__response

            from mvp_msgs.msg import ControlMode
            if ControlMode.__class__._TYPE_SUPPORT is None:
                ControlMode.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetControlMode_Response(metaclass=Metaclass_GetControlMode_Response):
    """Message class 'GetControlMode_Response'."""

    __slots__ = [
        '_mode',
    ]

    _fields_and_field_types = {
        'mode': 'mvp_msgs/ControlMode',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['mvp_msgs', 'msg'], 'ControlMode'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from mvp_msgs.msg import ControlMode
        self.mode = kwargs.get('mode', ControlMode())

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
        if self.mode != other.mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            from mvp_msgs.msg import ControlMode
            assert \
                isinstance(value, ControlMode), \
                "The 'mode' field must be a sub message of type 'ControlMode'"
        self._mode = value


class Metaclass_GetControlMode(type):
    """Metaclass of service 'GetControlMode'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mvp_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mvp_msgs.srv.GetControlMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_control_mode

            from mvp_msgs.srv import _get_control_mode
            if _get_control_mode.Metaclass_GetControlMode_Request._TYPE_SUPPORT is None:
                _get_control_mode.Metaclass_GetControlMode_Request.__import_type_support__()
            if _get_control_mode.Metaclass_GetControlMode_Response._TYPE_SUPPORT is None:
                _get_control_mode.Metaclass_GetControlMode_Response.__import_type_support__()


class GetControlMode(metaclass=Metaclass_GetControlMode):
    from mvp_msgs.srv._get_control_mode import GetControlMode_Request as Request
    from mvp_msgs.srv._get_control_mode import GetControlMode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
