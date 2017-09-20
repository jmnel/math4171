#include "PythonCommon.hpp"

#include "PythonTuple.hpp"

namespace arc::python {

    // -- Constructor --
    PythonTuple::PythonTuple(size_t size) {
        Py_Initialize();
        pyObject = PyTuple_New(size);
        assert(pyObject);
    }

    // -- Destructor --
    PythonTuple::~PythonTuple() {
    }

    //shared_ptr<PythonTuple> PythonTuple::create(size_t size) {
        //assert( size > 0 );
        //auto pyObject = PyTuple_New( size );
        //assert( pyObject );

        //auto pythonTuple = std::make_shared<PythonTuple>();
        //pythonTuple->size = size;
        //pythonTuple->pyObject = pyObject;
       
        //for( size_t i = 0; i < size; i++ ) {
            //pythonTuple->members.push_back( nullptr );
        //}

        //return pythonTuple;
    //}

    PythonObject::Type PythonTuple::getType() const {
        return PythonObject::Type::Tuple;
    }

    size_t PythonTuple::size() const {
        assert(pyObject);
        return PyTuple_Size(pyObject);
    }

    PythonObject PythonTuple::getAt(size_t i) {
        assert(pyObject);
        assert(i < size());
        auto pyItem = PyTuple_GetItem(pyObject, i);
        assert(pyItem);
        return pythonOmFromApiCast(pyItem);
    }

    void PythonTuple::setAt(size_t i, PythonObject const &item) {
        assert(pyObject);
        assert(item.isValid());
        assert(i < size());
        auto pyItem = pythonOmToApiCast(item);
        auto res = PyTuple_SetItem(pyObject, i, pyItem);
        assert(res == 0);
    }
    // size_t PythonTuple::getSize() const { return size; }

    // shared_ptr<PythonObject> PythonTuple::getAt(size_t n) const {
    // assert(n < size);
    // assert( members[ n ] );
    // return members[ n ];
    //}

    // void PythonTuple::setAt(size_t n, shared_ptr<PythonObject> v) {
    // assert(n < size);
    // members[n] = v;
    // PyTuple_SetItem(pyObject, n, v->pyObject);
    //}
    }
