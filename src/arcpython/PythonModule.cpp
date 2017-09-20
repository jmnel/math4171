#include "PythonModule.hpp"


namespace arc {

    // -- Constructor --
    PythonModule::PythonModule() {}

    // -- Destructor --
    PythonModule::~PythonModule() {
    }

    // -- create function --
    shared_ptr<PythonModule> PythonModule::create(string const &name) {
        assert(!name.empty());


        // auto pyName = PyUnicode_DecodeUTF8(name.c_str(), sizeof(name),
        // errors);
        // cout << "Err: " << errors << endl;
        auto pyName = PyUnicode_DecodeFSDefault(name.c_str());
        assert(pyName);
        auto pyModule = PyImport_Import(pyName);
        cout << "here" << endl;
        // Py_DECREF(pyName);

        assert(pyModule);
        if (!pyModule) {
            cout << "Error: Could not import Python module `";
            cout << name << "`." << endl;
            return nullptr;
        } else {
            auto module = std::make_shared<PythonModule>();
            module->name = name;
            module->pyObject = pyModule;
            return module;
        }
    }


    // -- getType function --
    PythonObject::Type PythonModule::getType() const {
        return PythonObject::Type::Module;
    }

    // -- getName function --
    string PythonModule::getName() const { return name; }

}  // namespace arc
