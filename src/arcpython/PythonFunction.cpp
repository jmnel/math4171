#include "PythonCommon.hpp"
#include "PythonFloat.hpp"
#include "PythonList.hpp"
#include "PythonModule.hpp"
#include "PythonTuple.hpp"

#include "PythonFunction.hpp"

namespace arc::python {

    // -- Constructor --
    PythonFunction::PythonFunction(PythonModule const &module,
                                   string const &name) : name(name) {
        cout << "Info: Creating function `" << name << "`." << endl;
        Py_Initialize();
        assert(module.pyObject);
        pyObject = PyObject_GetAttrString(module.pyObject, name.c_str());
        assert(pyObject);
    }

    // -- Destructor --
    PythonFunction::~PythonFunction() {}

    // -- create function --
    // shared_ptr<PythonFunction> PythonFunction::create(
    // shared_ptr<PythonModule> module, string const &name) {
    // assert(!name.empty());

    // assert( module->pyObject );
    // auto pyObject = PyObject_GetAttrString(module->pyObject, name.c_str());

    // assert( pyObject );

    // if (pyObject && PyCallable_Check(pyObject)) {
    // auto pythonFunction = std::make_shared<PythonFunction>();
    // pythonFunction->name = name;
    // pythonFunction->pyObject = pyObject;
    // cout << "Info: Function `" << name << "` created." << endl;
    // return pythonFunction;
    //} else {
    // cout << "Error: Failed to create Python function." << endl;
    // PyErr_Print();
    // return nullptr;
    //}
    //}

    // -- getType function --
    PythonObject::Type PythonFunction::getType() const {
        return PythonObject::Type::Function;
    }

    // -- getName function --
    string PythonFunction::getName() const { return name; }

    // -- call function : overload 1 / no arguments --
    PythonObject PythonFunction::call() {
        assert(pyObject);
        auto ret = PyObject_CallObject(pyObject, nullptr);
        cout << "Info: Function `" << name << "` called." << endl;
        cout << "return type=" << ret->ob_type->tp_name << endl;
        return pythonOmFromApiCast(ret);
    }
    
    // -- call function : overload 2 / python tuple arguments --
    PythonObject PythonFunction::call(PythonObject const &args) {
        assert(pyObject);
        assert(args.pyObject);
        auto argsTuple = PythonTuple(1);
        argsTuple.setAt( 0, args );
        auto pyArgsObject = pythonOmToApiCast( argsTuple );
        assert(pyArgsObject);
        auto ret = PyObject_CallObject(pyObject, pyArgsObject );
        assert(ret);
        cout << "Info: Function `" << name << "` called." << endl;
        cout << "return type=" << ret->ob_type->tp_name << endl;
        //abort();
        return pythonOmFromApiCast(ret);
    }

    // -- call function : overload 3 / python tuple arguments --
    PythonObject PythonFunction::call(PythonTuple const &args) {
        assert(pyObject);
        assert(args.pyObject);
        auto ret = PyObject_CallObject(pyObject, args.pyObject);
        cout << "Info: Function `" << name << "` called." << endl;
        return pythonOmFromApiCast(ret);
    }
    // shared_ptr<PythonObject> PythonFunction::call(
    // shared_ptr<PythonTuple> args) {
    //// cout << "Info: Python function `" << name << "` called." << endl;
    // assert(pyObject);
    // assert(args->pyObject);

    // assert(PyCallable_Check(pyObject));

    // auto returnObj = PyObject_CallObject(pyObject, args->pyObject);

    // if (PyFloat_CheckExact(returnObj)) {
    // auto pyFloat = std::make_shared<PythonFloat>();
    // pyFloat->pyObject = returnObj;
    // return pyFloat;
    //} else if (PyList_CheckExact(returnObj)) {
    // auto pyList = std::make_shared<PythonList>();
    // pyList->pyObject = returnObj;
    // return pyList;
    //} else if (PyTuple_CheckExact(returnObj)) {
    // auto pyTuple = std::make_shared<PythonTuple>();
    // pyTuple->pyObject = returnObj;
    // return pyTuple;
    //}
    // assert(false);
    // return nullptr;
    //}
}  // namespace arc::python
