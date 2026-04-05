// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from acomms_msgs:msg/UsblAngles.idl
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
#include "acomms_msgs/msg/detail/usbl_angles__struct.h"
#include "acomms_msgs/msg/detail/usbl_angles__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool acomms_msgs__msg__usbl_angles__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("acomms_msgs.msg._usbl_angles.UsblAngles", full_classname_dest, 39) == 0);
  }
  acomms_msgs__msg__UsblAngles * ros_message = _ros_message;
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
  {  // current_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // measurement_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "measurement_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->measurement_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // remote_address
    PyObject * field = PyObject_GetAttrString(_pymsg, "remote_address");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remote_address = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // local_bearing
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_bearing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->local_bearing = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // local_elevation
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_elevation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->local_elevation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bearing
    PyObject * field = PyObject_GetAttrString(_pymsg, "bearing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bearing = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // elevation
    PyObject * field = PyObject_GetAttrString(_pymsg, "elevation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->elevation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rssi
    PyObject * field = PyObject_GetAttrString(_pymsg, "rssi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rssi = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // signal_integrity
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_integrity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signal_integrity = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * acomms_msgs__msg__usbl_angles__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UsblAngles */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("acomms_msgs.msg._usbl_angles");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UsblAngles");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  acomms_msgs__msg__UsblAngles * ros_message = (acomms_msgs__msg__UsblAngles *)raw_ros_message;
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
  {  // current_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // measurement_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->measurement_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "measurement_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remote_address
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->remote_address);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remote_address", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_bearing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->local_bearing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_bearing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_elevation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->local_elevation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_elevation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bearing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bearing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bearing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elevation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->elevation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elevation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rssi
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rssi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rssi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_integrity
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->signal_integrity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_integrity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
