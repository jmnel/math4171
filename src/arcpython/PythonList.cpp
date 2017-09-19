#include "PythonList.hpp"

namespace arc {

    // -- Constructor --
    PythonList::PythonList() {}

    // -- Destructor --
    PythonList::~PythonList() {}

    // -- create function --
    shared_ptr<PythonList> PythonList::create(size_t size) {
        assert(size > 0);
        auto pyObject = PyList_New(size);
        assert(pyObject);

        auto pythonList = std::make_shared<PythonList>();
        pythonList->size = size;
        pythonList->pyObject = pyObject;

        for (size_t i = 0; i < size; i++) {
            pythonList->members.push_back(nullptr);
        }

        return pythonList;
    }

    // -- getType function --
    PythonObject::Type PythonList::getType() const {
        return PythonObject::Type::List;
    }

    shared_ptr<PythonObject> PythonList::getAt(size_t n) const {
        assert(n < size);
        assert(members[n]);
        return members[n];
    }

    void PythonList::setAt(size_t n, shared_ptr<PythonObject> v) {
        assert(n < size);
        members[n] = v;
        PyList_SetItem(pyObject, n, v->pyObject);
    }

    size_t PythonList::getSize() const { return size; }

    //double &PythonList::operator[](const size_t i) {
        //assert(i > 0);
        //assert(i < size());
        //assert(members[i]);
        //return members[i];
    //}

    //double const &PythonList::operator[](const size_t i) const {
        //return members[i];
    //}

    //PythonList &PythonList::operator=(PythonList const &t) {}
}
