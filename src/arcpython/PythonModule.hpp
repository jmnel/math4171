#pragma once

#include <iostream>
#include <memory>
#include <string>

#include <Python.h>

#include "PythonObject.hpp"

using std::cout;
using std::endl;
using std::shared_ptr;
using std::string;

namespace arc {

    class PythonContext;
    class PythonFunction;

    class PythonModule : public PythonObject {
    public:
        PythonModule();
        virtual ~PythonModule();

        virtual Type getType() const;
        string getName() const;

    private:
        static shared_ptr<PythonModule> create( string const &name );

        friend class PythonContext;
        friend class PythonFunction;

    private:
        string name;
    };
}
