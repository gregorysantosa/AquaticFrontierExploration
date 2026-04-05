// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mvp_msgs:srv/SetControlPoint.idl
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
#include "mvp_msgs/srv/detail/set_control_point__struct.h"
#include "mvp_msgs/srv/detail/set_control_point__functions.h"

bool mvp_msgs__msg__control_process__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mvp_msgs__msg__control_process__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mvp_msgs__srv__set_control_point__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("mvp_msgs.srv._set_control_point.SetControlPoint_Request", full_classname_dest, 55) == 0);
  }
  mvp_msgs__srv__SetControlPoint_Request * ros_message = _ros_message;
  {  // setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "setpoint");
    if (!field) {
      return false;
    }
    if (!mvp_msgs__msg__control_process__convert_from_py(field, &ros_message->setpoint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mvp_msgs__srv__set_control_point__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetControlPoint_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mvp_msgs.srv._set_control_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetControlPoint_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mvp_msgs__srv__SetControlPoint_Request * ros_message = (mvp_msgs__srv__SetControlPoint_Request *)raw_ros_message;
  {  // setpoint
    PyObject * field = NULL;
    field = mvp_msgs__msg__control_process__convert_to_py(&ros_message->setpoint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "mvp_msgs/srv/detail/set_control_point__struct.h"
// already included above
// #include "mvp_msgs/srv/detail/set_control_point__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mvp_msgs__srv__set_control_point__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("mvp_msgs.srv._set_control_point.SetControlPoint_Response", full_classname_dest, 56) == 0);
  }
  mvp_msgs__srv__SetControlPoint_Response * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mvp_msgs__srv__set_control_point__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetControlPoint_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mvp_msgs.srv._set_control_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetControlPoint_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
