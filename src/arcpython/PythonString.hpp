#pragma once

#include <cassert>
#include <string>

#include <Python.h>

#include <PythonObject.hpp>

using std::cout;
using std::endl;
using std::string;

namespace arc::python {

    class PythonString : public PythonObject {
    public:
        PythonString( string const &str );
        virtual ~PythonString();

        virtual PythonObject::Type getType() const final;

        string getValue() const;
        void setValue( string const &str = "" );
    };
}
