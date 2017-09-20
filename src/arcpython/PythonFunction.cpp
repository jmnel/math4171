#include "PythonFloat.hpp"
#include "PythonModule.hpp"
#include "PythonTuple.hpp"

#include "PythonFunction.hpp"


namespace arc {

    // -- Constructor --
    PythonFunction::PythonFunction() {}

    // -- Destructor --
    PythonFunction::~PythonFunction() {
    }

    // -- create function --
    shared_ptr<PythonFunction> PythonFunction::create(
        shared_ptr<PythonModule> module, string const &name) {
        assert(!name.empty());

        assert( module->pyObject );
        auto pyObject = PyObject_GetAttrString(module->pyObject, name.c_str());

        assert( pyObject );

        if (pyObject && PyCallable_Check(pyObject)) {
            auto pythonFunction = std::make_shared<PythonFunction>();
            pythonFunction->name = name;
            pythonFunction->pyObject = pyObject;
            cout << "Info: Function `" << name << "` created." << endl;
            return pythonFunction;
        } else {
            cout << "Error: Failed to create Python function." << endl;
            PyErr_Print();
            return nullptr;
        }
    }

    // -- getType function --
    PythonObject::Type PythonFunction::getType() const {
        return PythonObject::Type::Function;
    }

    // -- getName function --
    string PythonFunction::getName() const { return name; }

    void PythonFunction::call(shared_ptr<PythonTuple> args) {
        // cout << "Info: Python function `" << name << "` called." << endl;
        assert( pyObject );
        assert(args->pyObject);

        assert(PyCallable_Check(pyObject));

        auto res = PyObject_CallObject(pyObject, args->pyObject);
    }
}
