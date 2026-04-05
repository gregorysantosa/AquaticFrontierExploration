// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mvp_msgs:msg/Float64StampedWithVariance.idl
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
#include "mvp_msgs/msg/detail/float64_stamped_with_variance__struct.h"
#include "mvp_msgs/msg/detail/float64_stamped_with_variance__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mvp_msgs__msg__float64_stamped_with_variance__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("mvp_msgs.msg._float64_stamped_with_variance.Float64StampedWithVariance", full_classname_dest, 70) == 0);
  }
  mvp_msgs__msg__Float64StampedWithVariance * ros_message = _ros_message;
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
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // variance
    PyObject * field = PyObject_GetAttrString(_pymsg, "variance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->variance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mvp_msgs__msg__float64_stamped_with_variance__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Float64StampedWithVariance */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mvp_msgs.msg._float64_stamped_with_variance");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Float64StampedWithVariance");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mvp_msgs__msg__Float64StampedWithVariance * ros_message = (mvp_msgs__msg__Float64StampedWithVariance *)raw_ros_message;
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
  {  // data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // variance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->variance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "variance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
