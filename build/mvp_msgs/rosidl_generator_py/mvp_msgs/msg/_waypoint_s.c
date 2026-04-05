// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mvp_msgs:msg/Waypoint.idl
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
#include "mvp_msgs/msg/detail/waypoint__struct.h"
#include "mvp_msgs/msg/detail/waypoint__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geographic_msgs__msg__geo_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geographic_msgs__msg__geo_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mvp_msgs__msg__waypoint__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mvp_msgs.msg._waypoint.Waypoint", full_classname_dest, 31) == 0);
  }
  mvp_msgs__msg__Waypoint * ros_message = _ros_message;
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
  {  // wpt
    PyObject * field = PyObject_GetAttrString(_pymsg, "wpt");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->wpt)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ll_wpt
    PyObject * field = PyObject_GetAttrString(_pymsg, "ll_wpt");
    if (!field) {
      return false;
    }
    if (!geographic_msgs__msg__geo_point__convert_from_py(field, &ros_message->ll_wpt)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // u
    PyObject * field = PyObject_GetAttrString(_pymsg, "u");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mvp_msgs__msg__waypoint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Waypoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mvp_msgs.msg._waypoint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Waypoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mvp_msgs__msg__Waypoint * ros_message = (mvp_msgs__msg__Waypoint *)raw_ros_message;
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
  {  // wpt
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->wpt);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wpt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ll_wpt
    PyObject * field = NULL;
    field = geographic_msgs__msg__geo_point__convert_to_py(&ros_message->ll_wpt);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ll_wpt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
