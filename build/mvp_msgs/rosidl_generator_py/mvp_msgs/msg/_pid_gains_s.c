// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mvp_msgs:msg/PidGains.idl
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
#include "mvp_msgs/msg/detail/pid_gains__struct.h"
#include "mvp_msgs/msg/detail/pid_gains__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mvp_msgs__msg__pid_gains__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("mvp_msgs.msg._pid_gains.PidGains", full_classname_dest, 32) == 0);
  }
  mvp_msgs__msg__PidGains * ros_message = _ros_message;
  {  // kp
    PyObject * field = PyObject_GetAttrString(_pymsg, "kp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ki
    PyObject * field = PyObject_GetAttrString(_pymsg, "ki");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ki = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kd
    PyObject * field = PyObject_GetAttrString(_pymsg, "kd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kv
    PyObject * field = PyObject_GetAttrString(_pymsg, "kv");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kv = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pid_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pid_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pid_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pid_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mvp_msgs__msg__pid_gains__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PidGains */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mvp_msgs.msg._pid_gains");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PidGains");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mvp_msgs__msg__PidGains * ros_message = (mvp_msgs__msg__PidGains *)raw_ros_message;
  {  // kp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ki
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ki);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ki", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kv
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pid_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pid_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
