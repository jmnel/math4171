#pragma once

#include <cassert>

#include <Python.h>

#include "PythonObject.hpp"

namespace arc::python {

    class PythonFunction;

    class PythonFloat : public PythonObject {
    public:
        PythonFloat(double v = 0.0);
        virtual ~PythonFloat();

        virtual PythonObject::Type getType() const final;
        // static shared_ptr<PythonFloat> create( double v);

        double getValue() const;
        void setValue( double v );

    private:
        friend class PythonFunction;
    };
}
