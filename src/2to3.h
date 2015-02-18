#include <Python.h>

#if PY_MAJOR_VERSION >= 3

#define PyInt_FromLong(v) PyLong_FromLong(v)
#define PyInt_AS_LONG(v) PyLong_AsLong(v)
#define PyInt_AsLong(v) PyLong_AsLong
#define PyInt_Type PyLong_Type
#define PyInt_Check(o) PyLong_Check(o)
#define PyInt_FromSize_t(v) PyLong_FromSize_t(v)

#endif

#ifndef PyVarObject_HEAD_INIT

#define PyVarObject_HEAD_INIT(type, size) \
PyObject_HEAD_INIT(type) size,

#endif

#ifndef Py_TYPE

#define Py_TYPE(ob) (((PyObject*)(ob))->ob_type)

#endif