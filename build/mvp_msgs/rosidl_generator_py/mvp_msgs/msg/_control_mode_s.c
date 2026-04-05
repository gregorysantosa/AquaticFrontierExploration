// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mvp_msgs:msg/ControlMode.idl
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
#include "mvp_msgs/msg/detail/control_mode__struct.h"
#include "mvp_msgs/msg/detail/control_mode__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool mvp_msgs__msg__pid_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mvp_msgs__msg__pid_gains__convert_to_py(void * raw_ros_message);
bool mvp_msgs__msg__pid_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mvp_msgs__msg__pid_gains__convert_to_py(void * raw_ros_message);
bool mvp_msgs__msg__pid_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mvp_msgs__msg__pid_gains__convert_to_py(void * raw_ros_message);
bool mvp_msgs__msg__pid_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mvp_msgs__msg__pid_gains__convert_to_py(void * raw_ros_message);
bool mvp_msgs__msg__pid_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mvp_msgs__msg__pid_gains__convert_to_py(void * raw_ros_message);
bool mvp_msgs__msg__pid_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mvp_msgs__msg__pid_gains__convert_to_py(void * raw_ros_message);
bool mvp_msgs__msg__pid_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mvp_msgs__msg__pid_gains__convert_to_py(void * raw_ros_message);
bool mvp_msgs__msg__pid_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mvp_msgs__msg__pid_gains__convert_to_py(void * raw_ros_message);
bool mvp_msgs__msg__pid_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mvp_msgs__msg__pid_gains__convert_to_py(void * raw_ros_message);
bool mvp_msgs__msg__pid_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mvp_msgs__msg__pid_gains__convert_to_py(void * raw_ros_message);
bool mvp_msgs__msg__pid_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mvp_msgs__msg__pid_gains__convert_to_py(void * raw_ros_message);
bool mvp_msgs__msg__pid_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mvp_msgs__msg__pid_gains__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mvp_msgs__msg__control_mode__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("mvp_msgs.msg._control_mode.ControlMode", full_classname_dest, 38) == 0);
  }
  mvp_msgs__msg__ControlMode * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // dofs
    PyObject * field = PyObject_GetAttrString(_pymsg, "dofs");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->dofs), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->dofs.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'dofs'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->dofs), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->dofs.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // pid_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_x");
    if (!field) {
      return false;
    }
    if (!mvp_msgs__msg__pid_gains__convert_from_py(field, &ros_message->pid_x)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pid_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_y");
    if (!field) {
      return false;
    }
    if (!mvp_msgs__msg__pid_gains__convert_from_py(field, &ros_message->pid_y)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pid_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_z");
    if (!field) {
      return false;
    }
    if (!mvp_msgs__msg__pid_gains__convert_from_py(field, &ros_message->pid_z)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pid_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_roll");
    if (!field) {
      return false;
    }
    if (!mvp_msgs__msg__pid_gains__convert_from_py(field, &ros_message->pid_roll)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pid_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_pitch");
    if (!field) {
      return false;
    }
    if (!mvp_msgs__msg__pid_gains__convert_from_py(field, &ros_message->pid_pitch)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pid_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_yaw");
    if (!field) {
      return false;
    }
    if (!mvp_msgs__msg__pid_gains__convert_from_py(field, &ros_message->pid_yaw)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pid_u
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_u");
    if (!field) {
      return false;
    }
    if (!mvp_msgs__msg__pid_gains__convert_from_py(field, &ros_message->pid_u)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pid_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_v");
    if (!field) {
      return false;
    }
    if (!mvp_msgs__msg__pid_gains__convert_from_py(field, &ros_message->pid_v)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pid_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_w");
    if (!field) {
      return false;
    }
    if (!mvp_msgs__msg__pid_gains__convert_from_py(field, &ros_message->pid_w)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pid_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_p");
    if (!field) {
      return false;
    }
    if (!mvp_msgs__msg__pid_gains__convert_from_py(field, &ros_message->pid_p)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pid_q
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_q");
    if (!field) {
      return false;
    }
    if (!mvp_msgs__msg__pid_gains__convert_from_py(field, &ros_message->pid_q)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pid_r
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_r");
    if (!field) {
      return false;
    }
    if (!mvp_msgs__msg__pid_gains__convert_from_py(field, &ros_message->pid_r)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mvp_msgs__msg__control_mode__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlMode */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mvp_msgs.msg._control_mode");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlMode");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mvp_msgs__msg__ControlMode * ros_message = (mvp_msgs__msg__ControlMode *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dofs
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "dofs");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(int32_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->dofs.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->dofs.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->dofs.size * sizeof(int32_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // pid_x
    PyObject * field = NULL;
    field = mvp_msgs__msg__pid_gains__convert_to_py(&ros_message->pid_x);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_y
    PyObject * field = NULL;
    field = mvp_msgs__msg__pid_gains__convert_to_py(&ros_message->pid_y);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_z
    PyObject * field = NULL;
    field = mvp_msgs__msg__pid_gains__convert_to_py(&ros_message->pid_z);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_roll
    PyObject * field = NULL;
    field = mvp_msgs__msg__pid_gains__convert_to_py(&ros_message->pid_roll);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_pitch
    PyObject * field = NULL;
    field = mvp_msgs__msg__pid_gains__convert_to_py(&ros_message->pid_pitch);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_yaw
    PyObject * field = NULL;
    field = mvp_msgs__msg__pid_gains__convert_to_py(&ros_message->pid_yaw);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_u
    PyObject * field = NULL;
    field = mvp_msgs__msg__pid_gains__convert_to_py(&ros_message->pid_u);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_u", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_v
    PyObject * field = NULL;
    field = mvp_msgs__msg__pid_gains__convert_to_py(&ros_message->pid_v);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_w
    PyObject * field = NULL;
    field = mvp_msgs__msg__pid_gains__convert_to_py(&ros_message->pid_w);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_p
    PyObject * field = NULL;
    field = mvp_msgs__msg__pid_gains__convert_to_py(&ros_message->pid_p);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_q
    PyObject * field = NULL;
    field = mvp_msgs__msg__pid_gains__convert_to_py(&ros_message->pid_q);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_q", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_r
    PyObject * field = NULL;
    field = mvp_msgs__msg__pid_gains__convert_to_py(&ros_message->pid_r);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_r", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
