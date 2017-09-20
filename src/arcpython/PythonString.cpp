#include "PythonString.hpp"

namespace arc::python {

    // -- Constructor --
    PythonString::PythonString(string const &str) {
        Py_Initialize();
        // pyObject = PyUnicode_DecodeFSDefault(str.c_str());
        pyObject = PyUnicode_FromString(str.c_str());
        assert(pyObject);
    }

    // -- Destructor --
    PythonString::~PythonString() {}

    PythonObject::Type PythonString::getType() const { return Type::String; }

    string PythonString::getValue() const {
        assert(pyObject);
        auto uni = _PyUnicode_AsString(pyObject);
        string str((char *)uni);
        return str;
    }

    void PythonString::setValue(string const &str) {
        assert(pyObject);
        Py_DECREF(pyObject);
        pyObject = PyUnicode_FromString(str.c_str());
        assert(pyObject);
    }
}
