#pragma once

#include <Python.h>

#include <iostream>
#include <memory>
#include <vector>

//#include <Vec.hpp>

#include "PythonObject.hpp"

using std::cout;
using std::endl;
using std::shared_ptr;
using std::string;
using std::vector;

namespace arc {

    class PythonContext;
    class PythonObject;
    class PythonFunction;

    class PythonTupple : public PythonObject {
    public:
        PythonTupple();
        virtual ~PythonTupple();

        virtual PythonObject::Type getType() const;
        size_t getSize() const;
        shared_ptr<PythonObject> getAt( size_t n ) const;
        void setAt( size_t n, shared_ptr<PythonObject> pythonObject );

    private:
        static shared_ptr<PythonTupple> create(size_t size);

        friend class PythonContext;
        friend class PythonFunction;

    private:

        size_t size = 0;
        bool isInitializedFlag = false;

        vector< shared_ptr< PythonObject >> members;
        // PyObject * pyObject = nullptr;
    };
}
