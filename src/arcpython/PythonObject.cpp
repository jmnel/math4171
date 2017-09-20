#include "PythonObject.hpp"

namespace arc::python {

    size_t PythonObject::nextId = 0;
    size_t PythonObject::objectCount = 0;

    // -- Constructor --
    PythonObject::PythonObject() : id(nextId) {
        nextId++;
        objectCount++;
        cout << "Info: `PythonObject` created. ";
        cout << std::hex << "id=0x" << id;
        cout << " count=" << std::dec;
        cout << objectCount << endl;
    }

    // -- Destructor --
    PythonObject::~PythonObject() {
        // assert(pyObject);
        if (pyObject) {
            Py_DECREF(pyObject);
            pyObject = nullptr;
        }
        objectCount--;
    }

    // -- Copy assignment operator --
    PythonObject &PythonObject::operator=( PythonObject const &obj) {
        this->pyObject = obj.pyObject;
        Py_INCREF( obj.pyObject );
        return *this;
    }

    // -- getType function --
    PythonObject::Type PythonObject::getType() const { return Type::Object; }

    // -- getId function --
    size_t PythonObject::getId() const { return id; }

    // -- getObjectCount func --
    size_t PythonObject::getObjectCount() { return objectCount; }

    // -- isValid function --
    bool PythonObject::isValid() const {
        return pyObject != nullptr;
    }
}
