#pragma once

#include <Python.h>

#include <iostream>
#include <memory>
#include <string>

#include "PythonObject.hpp"

using std::cout;
using std::dynamic_pointer_cast;
using std::endl;
using std::shared_ptr;
using std::string;

namespace arc {

    class PythonContext;
    class PythonModule;
    class PythonTuple;

    class PythonFunction : PythonObject {
    public:
        PythonFunction();
        virtual ~PythonFunction();


        virtual PythonObject::Type getType() const;
        virtual string getName() const;

        void call( shared_ptr<PythonTuple> args );

    private:
        static shared_ptr<PythonFunction> create( shared_ptr<PythonModule> module, string const &name );
        
        friend class PythonContext;

    private:
        string name;
        PyObject * pyFunction = nullptr;
    };
}
