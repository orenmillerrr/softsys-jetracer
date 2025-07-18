# generated from rosidl_generator_py/resource/_idl.py.em
# with input from softsys_msgs:msg/Safety.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Safety(type):
    """Metaclass of message 'Safety'."""

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
            module = import_type_support('softsys_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'softsys_msgs.msg.Safety')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__safety
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__safety
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__safety
            cls._TYPE_SUPPORT = module.type_support_msg__msg__safety
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__safety

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


class Safety(metaclass=Metaclass_Safety):
    """Message class 'Safety'."""

    __slots__ = [
        '_header',
        '_is_auto',
        '_is_auto_steer',
        '_is_auto_throttle',
        '_is_emergency_stop',
        '_is_recieving_joystick',
        '_is_recieving_auto_steer',
        '_is_recieving_auto_throttle',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'is_auto': 'boolean',
        'is_auto_steer': 'boolean',
        'is_auto_throttle': 'boolean',
        'is_emergency_stop': 'boolean',
        'is_recieving_joystick': 'boolean',
        'is_recieving_auto_steer': 'boolean',
        'is_recieving_auto_throttle': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.is_auto = kwargs.get('is_auto', bool())
        self.is_auto_steer = kwargs.get('is_auto_steer', bool())
        self.is_auto_throttle = kwargs.get('is_auto_throttle', bool())
        self.is_emergency_stop = kwargs.get('is_emergency_stop', bool())
        self.is_recieving_joystick = kwargs.get('is_recieving_joystick', bool())
        self.is_recieving_auto_steer = kwargs.get('is_recieving_auto_steer', bool())
        self.is_recieving_auto_throttle = kwargs.get('is_recieving_auto_throttle', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.is_auto != other.is_auto:
            return False
        if self.is_auto_steer != other.is_auto_steer:
            return False
        if self.is_auto_throttle != other.is_auto_throttle:
            return False
        if self.is_emergency_stop != other.is_emergency_stop:
            return False
        if self.is_recieving_joystick != other.is_recieving_joystick:
            return False
        if self.is_recieving_auto_steer != other.is_recieving_auto_steer:
            return False
        if self.is_recieving_auto_throttle != other.is_recieving_auto_throttle:
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
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def is_auto(self):
        """Message field 'is_auto'."""
        return self._is_auto

    @is_auto.setter
    def is_auto(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_auto' field must be of type 'bool'"
        self._is_auto = value

    @builtins.property
    def is_auto_steer(self):
        """Message field 'is_auto_steer'."""
        return self._is_auto_steer

    @is_auto_steer.setter
    def is_auto_steer(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_auto_steer' field must be of type 'bool'"
        self._is_auto_steer = value

    @builtins.property
    def is_auto_throttle(self):
        """Message field 'is_auto_throttle'."""
        return self._is_auto_throttle

    @is_auto_throttle.setter
    def is_auto_throttle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_auto_throttle' field must be of type 'bool'"
        self._is_auto_throttle = value

    @builtins.property
    def is_emergency_stop(self):
        """Message field 'is_emergency_stop'."""
        return self._is_emergency_stop

    @is_emergency_stop.setter
    def is_emergency_stop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_emergency_stop' field must be of type 'bool'"
        self._is_emergency_stop = value

    @builtins.property
    def is_recieving_joystick(self):
        """Message field 'is_recieving_joystick'."""
        return self._is_recieving_joystick

    @is_recieving_joystick.setter
    def is_recieving_joystick(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_recieving_joystick' field must be of type 'bool'"
        self._is_recieving_joystick = value

    @builtins.property
    def is_recieving_auto_steer(self):
        """Message field 'is_recieving_auto_steer'."""
        return self._is_recieving_auto_steer

    @is_recieving_auto_steer.setter
    def is_recieving_auto_steer(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_recieving_auto_steer' field must be of type 'bool'"
        self._is_recieving_auto_steer = value

    @builtins.property
    def is_recieving_auto_throttle(self):
        """Message field 'is_recieving_auto_throttle'."""
        return self._is_recieving_auto_throttle

    @is_recieving_auto_throttle.setter
    def is_recieving_auto_throttle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_recieving_auto_throttle' field must be of type 'bool'"
        self._is_recieving_auto_throttle = value
