#pragma once

#include <type_traits>

#include <Python.h>

#include <PythonObject.hpp>

namespace arc::python {

    class PythonFloat;

    template <class T>
    PythonObject pythonOmGeneralize(T const &obj) {
        static_assert(std::is_base_of<PythonObject, T>::value, "Error: Can't "
                "generalize. Object must be derived from `PythonObject`.");
        PythonObject pyGeneric;
        pyGeneric.pyObject = obj.pyObject;
        return pyGeneric;
    }

    PythonObject pythonOmFromApiCast(PyObject * pyObj);

    PyObject * pythonOmToApiCast(PythonObject const &pyObj );

    template <class T>
    PyObject* pythonOmToApiCast(T const &pyObj ){
        static_assert(std::is_base_of<PythonObject, T>::value, "Error: Can't "
                "translate to API type. Object must be derived from `PythonObject`.");

        return pyObj.pyObject;
    }

    template <class T>
    T pythonOmSpecializeCast( PythonObject const &genericObj ) {
        static_assert(std::is_base_of<PythonObject, T>::value, "Error: Can't "
                "specialize type. Object must be derived from `PythonObject`.");
        if( std::is_same<PythonFloat, T>::value ) {
            assert( PyFloat_CheckExact( genericObj.pyObject ) );
        }
        T obj;
        obj.pyObject = genericObj.pyObject;
        return obj;
    }
}
