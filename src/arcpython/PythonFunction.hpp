#pragma once

#include <Python.h>

#include <iostream>
//#include <memory>
#include <string>

#include "PythonObject.hpp"

using std::cout;
// using std::dynamic_pointer_cast;
using std::endl;
// using std::shared_ptr;
using std::string;

namespace arc::python {

    class PythonContext;
    class PythonModule;
    class PythonTuple;

    class PythonFunction : PythonObject {
    public:
        PythonFunction(PythonModule const &module, string const &name);
        virtual ~PythonFunction();

        virtual PythonObject::Type getType() const;
        virtual string getName() const;

        template <typename T>
        PythonObject call(T t) {
            return t;
        }

        template <typename T, typename... Rest>
        PythonObject call(T t, Rest... rest) {
            return t + call(rest...);
        }
        // PythonObject call(PythonTuple const &args);
        // PythonObject call( PythonObject const &args );
        // shared_ptr<PythonObject> call(shared_ptr<PythonTuple> args);

    private:
        // static shared_ptr<PythonFunction> create(
        // shared_ptr<PythonModule> module, string const &name );

        friend class PythonContext;

    private:
        string name;
    };
}  // namespace arc::python
