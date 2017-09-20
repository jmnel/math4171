#include "PythonFloat.hpp"

namespace arc::python {

    // -- Constructor --
    PythonFloat::PythonFloat(double value) {
        Py_Initialize();
        pyObject = PyFloat_FromDouble(value);
        assert(pyObject);
    }

    // -- Destructor --
    PythonFloat::~PythonFloat() {}

    // -- getType function --
    PythonObject::Type PythonFloat::getType() const {
        return PythonObject::Type::Float;
    }

    // -- getValue function --
    double PythonFloat::getValue() const {
        assert( pyObject );
        return PyFloat_AsDouble( pyObject );
    }

    // -- setValue function --
    void PythonFloat::setValue( double v ) {
        assert( pyObject );
        Py_DECREF( pyObject );
        pyObject = PyFloat_FromDouble(v);
        assert(pyObject);
    }
}
