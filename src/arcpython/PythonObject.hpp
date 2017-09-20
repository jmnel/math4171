#pragma once

#include <iostream>

#include <Python.h>

using std::cout;
using std::endl;

namespace arc::python {

    class PythonFunction;
    class PythonList;
    class PythonTuple;

    class PythonObject {
    public:
        enum class Type {
            Object,
            None,
            Float,
            Function,
            List,
            Module,
            String,
            Tuple
        };

        PythonObject();
        virtual ~PythonObject();

        PythonObject& operator=(PythonObject const& ojb);

        virtual Type getType() const;

        size_t getId() const;
        static size_t getObjectCount();

        bool isValid() const;

    protected:
        // PyObject* getPyObject()

        friend class PythonFunction;
        friend class PythonList;
        friend class PythonTuple;

        template <class T>
        friend PythonObject pythonOmGeneralize(T const&);

        friend PythonObject pythonOmFromApiCast(PyObject*);

        friend PyObject* pythonOmToApiCast(PythonObject const&);

        template <class T>
        friend PyObject* pythonOmToApiCast(T const&);

        template <class T>
        friend T pythonOmSpecializeCast(PythonObject const&);

    protected:
        PyObject* pyObject = nullptr;
        const size_t id;

        static size_t nextId;
        static size_t objectCount;
    };
}
