# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mvp_msgs:msg/ControlMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'dofs'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlMode(type):
    """Metaclass of message 'ControlMode'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DOF_X': 0,
        'DOF_Y': 1,
        'DOF_Z': 2,
        'DOF_ROLL': 3,
        'DOF_PITCH': 4,
        'DOF_YAW': 5,
        'DOF_U': 6,
        'DOF_V': 7,
        'DOF_W': 8,
        'DOF_P': 9,
        'DOF_Q': 10,
        'DOF_R': 11,
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
                'mvp_msgs.msg.ControlMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_mode

            from mvp_msgs.msg import PidGains
            if PidGains.__class__._TYPE_SUPPORT is None:
                PidGains.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DOF_X': cls.__constants['DOF_X'],
            'DOF_Y': cls.__constants['DOF_Y'],
            'DOF_Z': cls.__constants['DOF_Z'],
            'DOF_ROLL': cls.__constants['DOF_ROLL'],
            'DOF_PITCH': cls.__constants['DOF_PITCH'],
            'DOF_YAW': cls.__constants['DOF_YAW'],
            'DOF_U': cls.__constants['DOF_U'],
            'DOF_V': cls.__constants['DOF_V'],
            'DOF_W': cls.__constants['DOF_W'],
            'DOF_P': cls.__constants['DOF_P'],
            'DOF_Q': cls.__constants['DOF_Q'],
            'DOF_R': cls.__constants['DOF_R'],
        }

    @property
    def DOF_X(self):
        """Message constant 'DOF_X'."""
        return Metaclass_ControlMode.__constants['DOF_X']

    @property
    def DOF_Y(self):
        """Message constant 'DOF_Y'."""
        return Metaclass_ControlMode.__constants['DOF_Y']

    @property
    def DOF_Z(self):
        """Message constant 'DOF_Z'."""
        return Metaclass_ControlMode.__constants['DOF_Z']

    @property
    def DOF_ROLL(self):
        """Message constant 'DOF_ROLL'."""
        return Metaclass_ControlMode.__constants['DOF_ROLL']

    @property
    def DOF_PITCH(self):
        """Message constant 'DOF_PITCH'."""
        return Metaclass_ControlMode.__constants['DOF_PITCH']

    @property
    def DOF_YAW(self):
        """Message constant 'DOF_YAW'."""
        return Metaclass_ControlMode.__constants['DOF_YAW']

    @property
    def DOF_U(self):
        """Message constant 'DOF_U'."""
        return Metaclass_ControlMode.__constants['DOF_U']

    @property
    def DOF_V(self):
        """Message constant 'DOF_V'."""
        return Metaclass_ControlMode.__constants['DOF_V']

    @property
    def DOF_W(self):
        """Message constant 'DOF_W'."""
        return Metaclass_ControlMode.__constants['DOF_W']

    @property
    def DOF_P(self):
        """Message constant 'DOF_P'."""
        return Metaclass_ControlMode.__constants['DOF_P']

    @property
    def DOF_Q(self):
        """Message constant 'DOF_Q'."""
        return Metaclass_ControlMode.__constants['DOF_Q']

    @property
    def DOF_R(self):
        """Message constant 'DOF_R'."""
        return Metaclass_ControlMode.__constants['DOF_R']


class ControlMode(metaclass=Metaclass_ControlMode):
    """
    Message class 'ControlMode'.

    Constants:
      DOF_X
      DOF_Y
      DOF_Z
      DOF_ROLL
      DOF_PITCH
      DOF_YAW
      DOF_U
      DOF_V
      DOF_W
      DOF_P
      DOF_Q
      DOF_R
    """

    __slots__ = [
        '_name',
        '_dofs',
        '_pid_x',
        '_pid_y',
        '_pid_z',
        '_pid_roll',
        '_pid_pitch',
        '_pid_yaw',
        '_pid_u',
        '_pid_v',
        '_pid_w',
        '_pid_p',
        '_pid_q',
        '_pid_r',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'dofs': 'sequence<int32>',
        'pid_x': 'mvp_msgs/PidGains',
        'pid_y': 'mvp_msgs/PidGains',
        'pid_z': 'mvp_msgs/PidGains',
        'pid_roll': 'mvp_msgs/PidGains',
        'pid_pitch': 'mvp_msgs/PidGains',
        'pid_yaw': 'mvp_msgs/PidGains',
        'pid_u': 'mvp_msgs/PidGains',
        'pid_v': 'mvp_msgs/PidGains',
        'pid_w': 'mvp_msgs/PidGains',
        'pid_p': 'mvp_msgs/PidGains',
        'pid_q': 'mvp_msgs/PidGains',
        'pid_r': 'mvp_msgs/PidGains',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mvp_msgs', 'msg'], 'PidGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mvp_msgs', 'msg'], 'PidGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mvp_msgs', 'msg'], 'PidGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mvp_msgs', 'msg'], 'PidGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mvp_msgs', 'msg'], 'PidGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mvp_msgs', 'msg'], 'PidGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mvp_msgs', 'msg'], 'PidGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mvp_msgs', 'msg'], 'PidGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mvp_msgs', 'msg'], 'PidGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mvp_msgs', 'msg'], 'PidGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mvp_msgs', 'msg'], 'PidGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mvp_msgs', 'msg'], 'PidGains'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.dofs = array.array('i', kwargs.get('dofs', []))
        from mvp_msgs.msg import PidGains
        self.pid_x = kwargs.get('pid_x', PidGains())
        from mvp_msgs.msg import PidGains
        self.pid_y = kwargs.get('pid_y', PidGains())
        from mvp_msgs.msg import PidGains
        self.pid_z = kwargs.get('pid_z', PidGains())
        from mvp_msgs.msg import PidGains
        self.pid_roll = kwargs.get('pid_roll', PidGains())
        from mvp_msgs.msg import PidGains
        self.pid_pitch = kwargs.get('pid_pitch', PidGains())
        from mvp_msgs.msg import PidGains
        self.pid_yaw = kwargs.get('pid_yaw', PidGains())
        from mvp_msgs.msg import PidGains
        self.pid_u = kwargs.get('pid_u', PidGains())
        from mvp_msgs.msg import PidGains
        self.pid_v = kwargs.get('pid_v', PidGains())
        from mvp_msgs.msg import PidGains
        self.pid_w = kwargs.get('pid_w', PidGains())
        from mvp_msgs.msg import PidGains
        self.pid_p = kwargs.get('pid_p', PidGains())
        from mvp_msgs.msg import PidGains
        self.pid_q = kwargs.get('pid_q', PidGains())
        from mvp_msgs.msg import PidGains
        self.pid_r = kwargs.get('pid_r', PidGains())

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
        if self.dofs != other.dofs:
            return False
        if self.pid_x != other.pid_x:
            return False
        if self.pid_y != other.pid_y:
            return False
        if self.pid_z != other.pid_z:
            return False
        if self.pid_roll != other.pid_roll:
            return False
        if self.pid_pitch != other.pid_pitch:
            return False
        if self.pid_yaw != other.pid_yaw:
            return False
        if self.pid_u != other.pid_u:
            return False
        if self.pid_v != other.pid_v:
            return False
        if self.pid_w != other.pid_w:
            return False
        if self.pid_p != other.pid_p:
            return False
        if self.pid_q != other.pid_q:
            return False
        if self.pid_r != other.pid_r:
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
    def dofs(self):
        """Message field 'dofs'."""
        return self._dofs

    @dofs.setter
    def dofs(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'dofs' array.array() must have the type code of 'i'"
            self._dofs = value
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
                "The 'dofs' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._dofs = array.array('i', value)

    @builtins.property
    def pid_x(self):
        """Message field 'pid_x'."""
        return self._pid_x

    @pid_x.setter
    def pid_x(self, value):
        if __debug__:
            from mvp_msgs.msg import PidGains
            assert \
                isinstance(value, PidGains), \
                "The 'pid_x' field must be a sub message of type 'PidGains'"
        self._pid_x = value

    @builtins.property
    def pid_y(self):
        """Message field 'pid_y'."""
        return self._pid_y

    @pid_y.setter
    def pid_y(self, value):
        if __debug__:
            from mvp_msgs.msg import PidGains
            assert \
                isinstance(value, PidGains), \
                "The 'pid_y' field must be a sub message of type 'PidGains'"
        self._pid_y = value

    @builtins.property
    def pid_z(self):
        """Message field 'pid_z'."""
        return self._pid_z

    @pid_z.setter
    def pid_z(self, value):
        if __debug__:
            from mvp_msgs.msg import PidGains
            assert \
                isinstance(value, PidGains), \
                "The 'pid_z' field must be a sub message of type 'PidGains'"
        self._pid_z = value

    @builtins.property
    def pid_roll(self):
        """Message field 'pid_roll'."""
        return self._pid_roll

    @pid_roll.setter
    def pid_roll(self, value):
        if __debug__:
            from mvp_msgs.msg import PidGains
            assert \
                isinstance(value, PidGains), \
                "The 'pid_roll' field must be a sub message of type 'PidGains'"
        self._pid_roll = value

    @builtins.property
    def pid_pitch(self):
        """Message field 'pid_pitch'."""
        return self._pid_pitch

    @pid_pitch.setter
    def pid_pitch(self, value):
        if __debug__:
            from mvp_msgs.msg import PidGains
            assert \
                isinstance(value, PidGains), \
                "The 'pid_pitch' field must be a sub message of type 'PidGains'"
        self._pid_pitch = value

    @builtins.property
    def pid_yaw(self):
        """Message field 'pid_yaw'."""
        return self._pid_yaw

    @pid_yaw.setter
    def pid_yaw(self, value):
        if __debug__:
            from mvp_msgs.msg import PidGains
            assert \
                isinstance(value, PidGains), \
                "The 'pid_yaw' field must be a sub message of type 'PidGains'"
        self._pid_yaw = value

    @builtins.property
    def pid_u(self):
        """Message field 'pid_u'."""
        return self._pid_u

    @pid_u.setter
    def pid_u(self, value):
        if __debug__:
            from mvp_msgs.msg import PidGains
            assert \
                isinstance(value, PidGains), \
                "The 'pid_u' field must be a sub message of type 'PidGains'"
        self._pid_u = value

    @builtins.property
    def pid_v(self):
        """Message field 'pid_v'."""
        return self._pid_v

    @pid_v.setter
    def pid_v(self, value):
        if __debug__:
            from mvp_msgs.msg import PidGains
            assert \
                isinstance(value, PidGains), \
                "The 'pid_v' field must be a sub message of type 'PidGains'"
        self._pid_v = value

    @builtins.property
    def pid_w(self):
        """Message field 'pid_w'."""
        return self._pid_w

    @pid_w.setter
    def pid_w(self, value):
        if __debug__:
            from mvp_msgs.msg import PidGains
            assert \
                isinstance(value, PidGains), \
                "The 'pid_w' field must be a sub message of type 'PidGains'"
        self._pid_w = value

    @builtins.property
    def pid_p(self):
        """Message field 'pid_p'."""
        return self._pid_p

    @pid_p.setter
    def pid_p(self, value):
        if __debug__:
            from mvp_msgs.msg import PidGains
            assert \
                isinstance(value, PidGains), \
                "The 'pid_p' field must be a sub message of type 'PidGains'"
        self._pid_p = value

    @builtins.property
    def pid_q(self):
        """Message field 'pid_q'."""
        return self._pid_q

    @pid_q.setter
    def pid_q(self, value):
        if __debug__:
            from mvp_msgs.msg import PidGains
            assert \
                isinstance(value, PidGains), \
                "The 'pid_q' field must be a sub message of type 'PidGains'"
        self._pid_q = value

    @builtins.property
    def pid_r(self):
        """Message field 'pid_r'."""
        return self._pid_r

    @pid_r.setter
    def pid_r(self, value):
        if __debug__:
            from mvp_msgs.msg import PidGains
            assert \
                isinstance(value, PidGains), \
                "The 'pid_r' field must be a sub message of type 'PidGains'"
        self._pid_r = value
