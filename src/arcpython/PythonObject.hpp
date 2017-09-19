#pragma once

#include <Python.h>

namespace arc {

    class PythonList;
    class PythonTupple;

    class PythonObject {
    public:
        enum class Type { Float, Function, List, Module, Tuple };

        virtual ~PythonObject();
        virtual Type getType() const = 0;

    protected:
        // PyObject* getPyObject()

        friend class PythonList;
        friend class PythonTupple;

    protected:
        PyObject* pyObject = nullptr;
    };
}
