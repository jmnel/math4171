#pragma once

#include <Python.h>

namespace arc {

    class PythonList;
    class PythonTuple;

    class PythonObject {
    public:
        enum class Type { Float, Function, List, Module, Tuple };

        virtual ~PythonObject();
        virtual Type getType() const = 0;

    protected:
        // PyObject* getPyObject()

        friend class PythonList;
        friend class PythonTuple;

    protected:
        PyObject* pyObject = nullptr;
    };
}
