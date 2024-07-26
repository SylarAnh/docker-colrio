// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from co_lrio:msg/LoopClosure.idl
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
#include "co_lrio/msg/detail/loop_closure__struct.h"
#include "co_lrio/msg/detail/loop_closure__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool co_lrio__msg__loop_closure__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("co_lrio.msg._loop_closure.LoopClosure", full_classname_dest, 37) == 0);
  }
  co_lrio__msg__LoopClosure * ros_message = _ros_message;
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
  {  // robot0
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot0 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // key0
    PyObject * field = PyObject_GetAttrString(_pymsg, "key0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->key0 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // robot1
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // key1
    PyObject * field = PyObject_GetAttrString(_pymsg, "key1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->key1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // yaw_diff
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_diff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yaw_diff = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->frame)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // noise
    PyObject * field = PyObject_GetAttrString(_pymsg, "noise");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->noise = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * co_lrio__msg__loop_closure__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LoopClosure */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("co_lrio.msg._loop_closure");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LoopClosure");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  co_lrio__msg__LoopClosure * ros_message = (co_lrio__msg__LoopClosure *)raw_ros_message;
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
  {  // robot0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key0
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->key0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->key1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_diff
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->yaw_diff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_diff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frame
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->frame);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // noise
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->noise);
    {
      int rc = PyObject_SetAttrString(_pymessage, "noise", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
