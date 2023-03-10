/* Generated by Cython 0.23.3 */

#ifndef __PYX_HAVE_API__bzrlib___simple_set_pyx
#define __PYX_HAVE_API__bzrlib___simple_set_pyx
#include "Python.h"
#include "_simple_set_pyx.h"

static PyTypeObject *__pyx_ptype_6bzrlib_15_simple_set_pyx_SimpleSet = 0;
#define SimpleSet_Type (*__pyx_ptype_6bzrlib_15_simple_set_pyx_SimpleSet)

static struct SimpleSetObject *(*__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_New)(void) = 0;
#define SimpleSet_New __pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_New
static PyObject *(*__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Add)(PyObject *, PyObject *) = 0;
#define SimpleSet_Add __pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Add
static int (*__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Contains)(PyObject *, PyObject *) = 0;
#define SimpleSet_Contains __pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Contains
static int (*__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Discard)(PyObject *, PyObject *) = 0;
#define SimpleSet_Discard __pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Discard
static PyObject *(*__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Get)(struct SimpleSetObject *, PyObject *) = 0;
#define SimpleSet_Get __pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Get
static Py_ssize_t (*__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Size)(PyObject *) = 0;
#define SimpleSet_Size __pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Size
static int (*__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Next)(PyObject *, Py_ssize_t *, PyObject **) = 0;
#define SimpleSet_Next __pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Next
static PyObject **(*__pyx_api_f_6bzrlib_15_simple_set_pyx__SimpleSet_Lookup)(PyObject *, PyObject *) = 0;
#define _SimpleSet_Lookup __pyx_api_f_6bzrlib_15_simple_set_pyx__SimpleSet_Lookup
#if !defined(__Pyx_PyIdentifier_FromString)
#if PY_MAJOR_VERSION < 3
  #define __Pyx_PyIdentifier_FromString(s) PyString_FromString(s)
#else
  #define __Pyx_PyIdentifier_FromString(s) PyUnicode_FromString(s)
#endif
#endif

#ifndef __PYX_HAVE_RT_ImportModule
#define __PYX_HAVE_RT_ImportModule
static PyObject *__Pyx_ImportModule(const char *name) {
    PyObject *py_name = 0;
    PyObject *py_module = 0;
    py_name = __Pyx_PyIdentifier_FromString(name);
    if (!py_name)
        goto bad;
    py_module = PyImport_Import(py_name);
    Py_DECREF(py_name);
    return py_module;
bad:
    Py_XDECREF(py_name);
    return 0;
}
#endif

#ifndef __PYX_HAVE_RT_ImportFunction
#define __PYX_HAVE_RT_ImportFunction
static int __Pyx_ImportFunction(PyObject *module, const char *funcname, void (**f)(void), const char *sig) {
    PyObject *d = 0;
    PyObject *cobj = 0;
    union {
        void (*fp)(void);
        void *p;
    } tmp;
    d = PyObject_GetAttrString(module, (char *)"__pyx_capi__");
    if (!d)
        goto bad;
    cobj = PyDict_GetItemString(d, funcname);
    if (!cobj) {
        PyErr_Format(PyExc_ImportError,
            "%.200s does not export expected C function %.200s",
                PyModule_GetName(module), funcname);
        goto bad;
    }
#if PY_VERSION_HEX >= 0x02070000
    if (!PyCapsule_IsValid(cobj, sig)) {
        PyErr_Format(PyExc_TypeError,
            "C function %.200s.%.200s has wrong signature (expected %.500s, got %.500s)",
             PyModule_GetName(module), funcname, sig, PyCapsule_GetName(cobj));
        goto bad;
    }
    tmp.p = PyCapsule_GetPointer(cobj, sig);
#else
    {const char *desc, *s1, *s2;
    desc = (const char *)PyCObject_GetDesc(cobj);
    if (!desc)
        goto bad;
    s1 = desc; s2 = sig;
    while (*s1 != '\0' && *s1 == *s2) { s1++; s2++; }
    if (*s1 != *s2) {
        PyErr_Format(PyExc_TypeError,
            "C function %.200s.%.200s has wrong signature (expected %.500s, got %.500s)",
             PyModule_GetName(module), funcname, sig, desc);
        goto bad;
    }
    tmp.p = PyCObject_AsVoidPtr(cobj);}
#endif
    *f = tmp.fp;
    if (!(*f))
        goto bad;
    Py_DECREF(d);
    return 0;
bad:
    Py_XDECREF(d);
    return -1;
}
#endif

#ifndef __PYX_HAVE_RT_ImportType
#define __PYX_HAVE_RT_ImportType
static PyTypeObject *__Pyx_ImportType(const char *module_name, const char *class_name,
    size_t size, int strict)
{
    PyObject *py_module = 0;
    PyObject *result = 0;
    PyObject *py_name = 0;
    char warning[200];
    Py_ssize_t basicsize;
#ifdef Py_LIMITED_API
    PyObject *py_basicsize;
#endif
    py_module = __Pyx_ImportModule(module_name);
    if (!py_module)
        goto bad;
    py_name = __Pyx_PyIdentifier_FromString(class_name);
    if (!py_name)
        goto bad;
    result = PyObject_GetAttr(py_module, py_name);
    Py_DECREF(py_name);
    py_name = 0;
    Py_DECREF(py_module);
    py_module = 0;
    if (!result)
        goto bad;
    if (!PyType_Check(result)) {
        PyErr_Format(PyExc_TypeError,
            "%.200s.%.200s is not a type object",
            module_name, class_name);
        goto bad;
    }
#ifndef Py_LIMITED_API
    basicsize = ((PyTypeObject *)result)->tp_basicsize;
#else
    py_basicsize = PyObject_GetAttrString(result, "__basicsize__");
    if (!py_basicsize)
        goto bad;
    basicsize = PyLong_AsSsize_t(py_basicsize);
    Py_DECREF(py_basicsize);
    py_basicsize = 0;
    if (basicsize == (Py_ssize_t)-1 && PyErr_Occurred())
        goto bad;
#endif
    if (!strict && (size_t)basicsize > size) {
        PyOS_snprintf(warning, sizeof(warning),
            "%s.%s size changed, may indicate binary incompatibility",
            module_name, class_name);
        if (PyErr_WarnEx(NULL, warning, 0) < 0) goto bad;
    }
    else if ((size_t)basicsize != size) {
        PyErr_Format(PyExc_ValueError,
            "%.200s.%.200s has the wrong size, try recompiling",
            module_name, class_name);
        goto bad;
    }
    return (PyTypeObject *)result;
bad:
    Py_XDECREF(py_module);
    Py_XDECREF(result);
    return NULL;
}
#endif


static int import_bzrlib___simple_set_pyx(void) {
  PyObject *module = 0;
  module = __Pyx_ImportModule("bzrlib._simple_set_pyx");
  if (!module) goto bad;
  if (__Pyx_ImportFunction(module, "SimpleSet_New", (void (**)(void))&__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_New, "struct SimpleSetObject *(void)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "SimpleSet_Add", (void (**)(void))&__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Add, "PyObject *(PyObject *, PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "SimpleSet_Contains", (void (**)(void))&__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Contains, "int (PyObject *, PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "SimpleSet_Discard", (void (**)(void))&__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Discard, "int (PyObject *, PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "SimpleSet_Get", (void (**)(void))&__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Get, "PyObject *(struct SimpleSetObject *, PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "SimpleSet_Size", (void (**)(void))&__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Size, "Py_ssize_t (PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "SimpleSet_Next", (void (**)(void))&__pyx_api_f_6bzrlib_15_simple_set_pyx_SimpleSet_Next, "int (PyObject *, Py_ssize_t *, PyObject **)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "_SimpleSet_Lookup", (void (**)(void))&__pyx_api_f_6bzrlib_15_simple_set_pyx__SimpleSet_Lookup, "PyObject **(PyObject *, PyObject *)") < 0) goto bad;
  Py_DECREF(module); module = 0;
  __pyx_ptype_6bzrlib_15_simple_set_pyx_SimpleSet = __Pyx_ImportType("bzrlib._simple_set_pyx", "SimpleSet", sizeof(struct SimpleSetObject), 1); if (!__pyx_ptype_6bzrlib_15_simple_set_pyx_SimpleSet) goto bad;
  return 0;
  bad:
  Py_XDECREF(module);
  return -1;
}

#endif /* !__PYX_HAVE_API__bzrlib___simple_set_pyx */
