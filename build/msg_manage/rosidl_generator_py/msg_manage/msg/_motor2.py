# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg_manage:msg/Motor2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Motor2(type):
    """Metaclass of message 'Motor2'."""

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
            module = import_type_support('msg_manage')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_manage.msg.Motor2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor2

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Motor2(metaclass=Metaclass_Motor2):
    """Message class 'Motor2'."""

    __slots__ = [
        '_speed_l',
        '_speed_r',
        '_fram_id',
    ]

    _fields_and_field_types = {
        'speed_l': 'float',
        'speed_r': 'float',
        'fram_id': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.speed_l = kwargs.get('speed_l', float())
        self.speed_r = kwargs.get('speed_r', float())
        self.fram_id = kwargs.get('fram_id', int())

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
        if self.speed_l != other.speed_l:
            return False
        if self.speed_r != other.speed_r:
            return False
        if self.fram_id != other.fram_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def speed_l(self):
        """Message field 'speed_l'."""
        return self._speed_l

    @speed_l.setter
    def speed_l(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_l' field must be of type 'float'"
        self._speed_l = value

    @property
    def speed_r(self):
        """Message field 'speed_r'."""
        return self._speed_r

    @speed_r.setter
    def speed_r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_r' field must be of type 'float'"
        self._speed_r = value

    @property
    def fram_id(self):
        """Message field 'fram_id'."""
        return self._fram_id

    @fram_id.setter
    def fram_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fram_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'fram_id' field must be an unsigned integer in [0, 65535]"
        self._fram_id = value
