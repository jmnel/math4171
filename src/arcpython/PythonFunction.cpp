#include "PythonModule.hpp"
#include "PythonTupple.hpp"

#include "PythonFunction.hpp"


namespace arc {

    // -- Constructor --
    PythonFunction::PythonFunction() {}

    // -- Destructor --
    PythonFunction::~PythonFunction() {
        if (pyFunction) {
            Py_DECREF(pyFunction);
            pyFunction = nullptr;
        }
    }

    // -- create function --
    shared_ptr<PythonFunction> PythonFunction::create(
        shared_ptr<PythonModule> module, string const &name) {
        assert(!name.empty());

        auto pyFunction =
            PyObject_GetAttrString(module->pyModule, name.c_str());

        if (pyFunction && PyCallable_Check(pyFunction)) {
            auto func = std::make_shared<PythonFunction>();
            func->name = name;
            func->pyFunction = pyFunction;
            cout << "Info: Function `" << name << "` created." << endl;
            return func;
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

    void PythonFunction::call(shared_ptr<PythonTupple> args) {
        auto res = PyObject_CallObject(pyFunction, args->pyObject);
    }

    //PythonFunction PythonFunction::operator()(shared_ptr<PythonTupple> args) {
        //auto pValue = PyFloat_FromDouble(0.0);
        //pValue = PyObject_CallObject(pyFunction, args->pyObject);
        //Py_DECREF(pValue);
        //return *this;
    //}
}
