#pragma once

#include <cassert>
#include <memory>

#include <Python.h>

#include "PythonObject.hpp"

using std::shared_ptr;

namespace arc {

    class PythonFloat : public PythonObject {
    public:
        PythonFloat();
        ~PythonFloat();

        virtual PythonObject::Type getType() const;
        static shared_ptr<PythonFloat> create( double v);

        double getValue() const;
        void setValue( double v );
    private:

    };
}
