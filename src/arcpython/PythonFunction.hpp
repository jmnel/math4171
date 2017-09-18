#pragma once

#include <Python.h>

#include <iostream>
#include <memory>
#include <string>

#include "PythonObject.hpp"

using std::cout;
using std::endl;
using std::shared_ptr;
using std::string;

namespace arc {

    class PythonContext;
    class PythonModule;
    class PythonTupple;

    class PythonFunction : PyObject {
    public:
        PythonFunction();
        virtual ~PythonFunction();


        virtual PythonObject::Type getType() const;
        virtual string getName() const;

        void call( shared_ptr<PythonTupple> args );
        //PythonFunction operator()( shared_ptr<PythonTupple> args );

    private:
        static shared_ptr<PythonFunction> create( shared_ptr<PythonModule> module, string const &name );
        
        friend class PythonContext;

    private:
        string name;
        PyObject * pyFunction = nullptr;
    };
}
