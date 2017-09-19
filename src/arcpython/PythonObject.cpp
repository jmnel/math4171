#include "PythonObject.hpp"

namespace arc {

    // -- Destructor --
    PythonObject::~PythonObject() {
        if (pyObject) {
            Py_DECREF(pyObject);
            pyObject = nullptr;
        }
    }
}
