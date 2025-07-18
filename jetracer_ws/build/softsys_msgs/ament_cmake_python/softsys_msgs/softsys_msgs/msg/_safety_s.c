// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from softsys_msgs:msg/Safety.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "softsys_msgs/msg/detail/safety__struct.h"
#include "softsys_msgs/msg/detail/safety__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool softsys_msgs__msg__safety__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("softsys_msgs.msg._safety.Safety", full_classname_dest, 31) == 0);
  }
  softsys_msgs__msg__Safety * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_auto
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_auto");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_auto = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_auto_steer
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_auto_steer");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_auto_steer = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_auto_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_auto_throttle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_auto_throttle = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_emergency_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_emergency_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_emergency_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_recieving_joystick
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_recieving_joystick");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_recieving_joystick = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_recieving_auto_steer
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_recieving_auto_steer");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_recieving_auto_steer = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_recieving_auto_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_recieving_auto_throttle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_recieving_auto_throttle = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * softsys_msgs__msg__safety__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Safety */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("softsys_msgs.msg._safety");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Safety");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  softsys_msgs__msg__Safety * ros_message = (softsys_msgs__msg__Safety *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_auto
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_auto ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_auto", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_auto_steer
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_auto_steer ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_auto_steer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_auto_throttle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_auto_throttle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_auto_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_emergency_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_emergency_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_emergency_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_recieving_joystick
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_recieving_joystick ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_recieving_joystick", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_recieving_auto_steer
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_recieving_auto_steer ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_recieving_auto_steer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_recieving_auto_throttle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_recieving_auto_throttle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_recieving_auto_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
