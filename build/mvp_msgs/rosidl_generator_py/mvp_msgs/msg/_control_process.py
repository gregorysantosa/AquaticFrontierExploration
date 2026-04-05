# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mvp_msgs:msg/ControlProcess.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlProcess(type):
    """Metaclass of message 'ControlProcess'."""

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
                'mvp_msgs.msg.ControlProcess')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_process
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_process
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_process
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_process
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_process

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


class ControlProcess(metaclass=Metaclass_ControlProcess):
    """Message class 'ControlProcess'."""

    __slots__ = [
        '_header',
        '_control_mode',
        '_position',
        '_orientation',
        '_child_frame_id',
        '_velocity',
        '_angular_rate',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'control_mode': 'string',
        'position': 'geometry_msgs/Vector3',
        'orientation': 'geometry_msgs/Vector3',
        'child_frame_id': 'string',
        'velocity': 'geometry_msgs/Vector3',
        'angular_rate': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.control_mode = kwargs.get('control_mode', str())
        from geometry_msgs.msg import Vector3
        self.position = kwargs.get('position', Vector3())
        from geometry_msgs.msg import Vector3
        self.orientation = kwargs.get('orientation', Vector3())
        self.child_frame_id = kwargs.get('child_frame_id', str())
        from geometry_msgs.msg import Vector3
        self.velocity = kwargs.get('velocity', Vector3())
        from geometry_msgs.msg import Vector3
        self.angular_rate = kwargs.get('angular_rate', Vector3())

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
        if self.control_mode != other.control_mode:
            return False
        if self.position != other.position:
            return False
        if self.orientation != other.orientation:
            return False
        if self.child_frame_id != other.child_frame_id:
            return False
        if self.velocity != other.velocity:
            return False
        if self.angular_rate != other.angular_rate:
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
    def control_mode(self):
        """Message field 'control_mode'."""
        return self._control_mode

    @control_mode.setter
    def control_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'control_mode' field must be of type 'str'"
        self._control_mode = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'position' field must be a sub message of type 'Vector3'"
        self._position = value

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'orientation' field must be a sub message of type 'Vector3'"
        self._orientation = value

    @builtins.property
    def child_frame_id(self):
        """Message field 'child_frame_id'."""
        return self._child_frame_id

    @child_frame_id.setter
    def child_frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'child_frame_id' field must be of type 'str'"
        self._child_frame_id = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'velocity' field must be a sub message of type 'Vector3'"
        self._velocity = value

    @builtins.property
    def angular_rate(self):
        """Message field 'angular_rate'."""
        return self._angular_rate

    @angular_rate.setter
    def angular_rate(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angular_rate' field must be a sub message of type 'Vector3'"
        self._angular_rate = value
