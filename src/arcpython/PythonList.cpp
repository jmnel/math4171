#include "PythonCommon.hpp"

#include "PythonList.hpp"

namespace arc::python {

    // -- Constructor --
    PythonList::PythonList() {
        Py_Initialize();
        pyObject = PyList_New(0);
        assert(pyObject);
    }

    // -- Destructor --
    PythonList::~PythonList() {}

    // -- create function --
    //shared_ptr<PythonList> PythonList::create() {
        //auto pyObject = PyList_New(0);
        //assert(pyObject);

        //auto pythonList = std::make_shared<PythonList>();
        //pythonList->pyObject = pyObject;

        //return pythonList;
    //}

    // -- getType function --
    PythonObject::Type PythonList::getType() const {
        return PythonObject::Type::List;
    }

    size_t PythonList::size() const {
        assert(pyObject);
        return PyList_Size( pyObject );
    }

    PythonObject PythonList::getAt( size_t i ) {
        assert(pyObject);
        assert(i<size());
        auto pyItem = PyList_GetItem(pyObject, i );
        assert(pyItem);
        return pythonOmFromApiCast( pyItem );
    }

    void PythonList::setAt( size_t i, PythonObject const &item )  {
        assert(pyObject);
        assert(item.isValid());
        assert(i<size());
        auto pyItem = pythonOmToApiCast(item);
        auto res = PyList_SetItem( pyObject, i, pyItem );
        assert(res == 0);
    }

    void PythonList::pushBack( PythonObject const &item ) {
        assert(pyObject);
        assert(item.isValid());
        auto pyItem = pythonOmToApiCast( item );
        auto res = PyList_Append( pyObject, pyItem );
        assert( res == 0 );
    }


    //shared_ptr<PythonObject> PythonList::getAt(size_t i) const {
        //assert( i < getSize() );
        //auto itemPyObject = PyList_GetItem( pyObject, i );
        ////auto item = std::make_shared<PythonObject>();
        ////item->pyObject = itemPyObject;
        //auto item = members[ i ];
        //assert( item->pyObject == itemPyObject );
        //return item;
        ////assert(n < size);
        ////assert(members[n]);
        ////return members[n];
    //}

    //void PythonList::setAt(size_t i, shared_ptr<PythonObject> item) {
        //assert( i < getSize() );
        //auto res = PyList_SetItem( pyObject, i, item->pyObject );
        //members[ i ] = item;
        //assert( res == 0 );
        ////assert(n < size);
        ////members[n] = v;
    //}

    //void PythonList::push_back( shared_ptr<PythonObject> item) {
        //auto res = PyList_Append( pyObject, item->pyObject );
        //assert( res == 0 );
        //members.push_back( item );
    //}

    // -- getSize function --
    //size_t PythonList::getSize() const {
        //auto size = PyList_Size( pyObject );
        //// assert( size == members.size() );
        //return size;
    //}

    //shared_ptr<PythonObject> PythonList::operator[]( const size_t i ) {
        //return getAt( i );
    //}

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
