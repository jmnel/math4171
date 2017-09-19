#include "PythonTupple.hpp"

namespace arc {

    // -- Constructor --
    PythonTupple::PythonTupple() {
    }

    // -- Destructor --
    PythonTupple::~PythonTupple() {
    }

    shared_ptr<PythonTupple> PythonTupple::create(size_t size) {
        assert( size > 0 );
        auto pyObject = PyTuple_New( size );
        assert( pyObject );

        auto pythonTuple = std::make_shared<PythonTupple>();
        pythonTuple->size = size;
        pythonTuple->pyObject = pyObject;
       
        for( size_t i = 0; i < size; i++ ) {
            pythonTuple->members.push_back( nullptr );
        }

        return pythonTuple;
    }

    PythonObject::Type PythonTupple::getType() const {
        return PythonObject::Type::Tuple;
    }

    size_t PythonTupple::getSize() const { return size; }

    shared_ptr<PythonObject> PythonTupple::getAt(size_t n) const {
        assert(n < size);
        assert( members[ n ] );
        return members[ n ];
    }

    void PythonTupple::setAt(size_t n, shared_ptr<PythonObject> v) {
        assert(n < size);
        members[n] = v;
        PyTuple_SetItem(pyObject, n, v->pyObject);
    }
}
