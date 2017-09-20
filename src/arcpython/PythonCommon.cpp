#include "PythonCommon.hpp"

namespace arc::python {

    PythonObject pythonOmFromApiCast(PyObject * pyObj) {
        assert(pyObj);
        PythonObject obj;
        obj.pyObject = pyObj;

        // We assume caller assumes reference counting responsiblity of `pyObj`,
        // but we must increment reference count for new `ojb` object.
        Py_INCREF(pyObj);
        return obj;
    }

    PyObject *pythonOmToApiCast(PythonObject const &pyObj) {
        assert(pyObj.pyObject);
        return pyObj.pyObject;

        // Reference count for `pyObj` happens automatically. Caller must handle
        // raw `PyObject` pointer reference count.
    }
}
