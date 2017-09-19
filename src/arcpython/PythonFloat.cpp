#include "PythonFloat.hpp"

namespace arc {

    // -- Constructor --
    PythonFloat::PythonFloat() {}

    // -- Destructor --
    PythonFloat::~PythonFloat() {}

    // -- create function --
    shared_ptr<PythonFloat> PythonFloat::create(double v) {
        auto pythonFloat = std::make_shared<PythonFloat>();
        pythonFloat->pyObject = PyFloat_FromDouble( v );
        assert( pythonFloat->pyObject );
        return pythonFloat;
    }

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
        pyObject = PyFloat_FromDouble( v );
    }
}
