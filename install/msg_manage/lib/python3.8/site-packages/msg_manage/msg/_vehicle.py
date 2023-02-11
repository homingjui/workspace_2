# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg_manage:msg/Vehicle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Vehicle(type):
    """Metaclass of message 'Vehicle'."""

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
                'msg_manage.msg.Vehicle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle

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


class Vehicle(metaclass=Metaclass_Vehicle):
    """Message class 'Vehicle'."""

    __slots__ = [
        '_header',
        '_position',
        '_position_accuracy',
        '_speed',
        '_acceleration',
        '_heading',
        '_turn_angle',
        '_turn_rate',
        '_control_status',
        '_vehicle_size',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'position': 'geometry_msgs/Vector3',
        'position_accuracy': 'double',
        'speed': 'geometry_msgs/Vector3',
        'acceleration': 'geometry_msgs/Vector3',
        'heading': 'double',
        'turn_angle': 'double',
        'turn_rate': 'double',
        'control_status': 'uint8',
        'vehicle_size': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Vector3
        self.position = kwargs.get('position', Vector3())
        self.position_accuracy = kwargs.get('position_accuracy', float())
        from geometry_msgs.msg import Vector3
        self.speed = kwargs.get('speed', Vector3())
        from geometry_msgs.msg import Vector3
        self.acceleration = kwargs.get('acceleration', Vector3())
        self.heading = kwargs.get('heading', float())
        self.turn_angle = kwargs.get('turn_angle', float())
        self.turn_rate = kwargs.get('turn_rate', float())
        self.control_status = kwargs.get('control_status', int())
        from geometry_msgs.msg import Vector3
        self.vehicle_size = kwargs.get('vehicle_size', Vector3())

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
        if self.position != other.position:
            return False
        if self.position_accuracy != other.position_accuracy:
            return False
        if self.speed != other.speed:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.heading != other.heading:
            return False
        if self.turn_angle != other.turn_angle:
            return False
        if self.turn_rate != other.turn_rate:
            return False
        if self.control_status != other.control_status:
            return False
        if self.vehicle_size != other.vehicle_size:
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

    @property
    def position_accuracy(self):
        """Message field 'position_accuracy'."""
        return self._position_accuracy

    @position_accuracy.setter
    def position_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_accuracy' field must be of type 'float'"
        self._position_accuracy = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'speed' field must be a sub message of type 'Vector3'"
        self._speed = value

    @property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'acceleration' field must be a sub message of type 'Vector3'"
        self._acceleration = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
        self._heading = value

    @property
    def turn_angle(self):
        """Message field 'turn_angle'."""
        return self._turn_angle

    @turn_angle.setter
    def turn_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turn_angle' field must be of type 'float'"
        self._turn_angle = value

    @property
    def turn_rate(self):
        """Message field 'turn_rate'."""
        return self._turn_rate

    @turn_rate.setter
    def turn_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turn_rate' field must be of type 'float'"
        self._turn_rate = value

    @property
    def control_status(self):
        """Message field 'control_status'."""
        return self._control_status

    @control_status.setter
    def control_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'control_status' field must be an unsigned integer in [0, 255]"
        self._control_status = value

    @property
    def vehicle_size(self):
        """Message field 'vehicle_size'."""
        return self._vehicle_size

    @vehicle_size.setter
    def vehicle_size(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'vehicle_size' field must be a sub message of type 'Vector3'"
        self._vehicle_size = value
