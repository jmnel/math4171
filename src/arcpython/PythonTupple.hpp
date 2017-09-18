#pragma once

#include <Python.h>

#include <iostream>
#include <memory>

//#include <Vec.hpp>

using std::cout;
using std::endl;
using std::shared_ptr;
using std::string;

namespace arc {

    class PythonContext;
    class PythonFunction;

    class PythonTupple {
    public:
        PythonTupple();
        virtual ~PythonTupple();

        size_t getSize() const;
        double getAt( size_t n ) const;
        void setAt( size_t n, double value );

    private:
        static shared_ptr<PythonTupple> create( size_t dimension );

        friend class PythonContext;
        friend class PythonFunction;

    private:

        size_t size = 0;
        double * values = nullptr;
        PyObject * pyObject = nullptr;

    };
}
