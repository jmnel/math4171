#include "PythonTupple.hpp"

namespace arc {

    // -- Constructor --
    PythonTupple::PythonTupple() {
    }

    // -- Destructor --
    PythonTupple::~PythonTupple() {
        assert(values);
        assert(pyObject);
        delete values;
        values = nullptr;
        Py_DECREF(pyObject);
        pyObject = nullptr;
    }

    shared_ptr<PythonTupple> PythonTupple::create(size_t size) {
        assert(size > 0);
        auto pyObject = PyTuple_New(size);
        assert(pyObject );

        auto tupple = std::make_shared<PythonTupple>();
        tupple->values = new double[size];
        tupple->size = size;
        tupple->pyObject = pyObject;

        cout << "Creating tupple" << endl;
        return tupple;
    }

    size_t PythonTupple::getSize() const { return size; }

    double PythonTupple::getAt(size_t n) const {
        assert(n < size);
        return values[n];
    }

    void PythonTupple::setAt(size_t n, double value) {
        assert(n < size);
        values[n] = value;
    }
}
