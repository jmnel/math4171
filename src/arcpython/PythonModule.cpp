#include "PythonModule.hpp"

namespace arc::python {

    // -- Constructor --
    PythonModule::PythonModule(string const &name) {
        assert(!name.empty());
        Py_Initialize();

        // auto pyName = PyUnicode_DecodeFSDefault(name.c_str());
        auto pyName = PyUnicode_FromString(name.c_str());
        assert(pyName);
        pyObject = PyImport_Import(pyName);
        // assert(pyObject);
        Py_DECREF(pyName);

        // assert(pyObject);
        if (!pyObject) {
            cout << "Error: Could not import Python module `";
            cout << name << "`." << endl;
            abort();
        }
    }

    // -- Destructor --
    PythonModule::~PythonModule() {}

    // -- getType function --
    PythonObject::Type PythonModule::getType() const {
        return PythonObject::Type::Module;
    }

    // -- getName function --
    string PythonModule::getName() const { return name; }

}  // namespace arc::python
