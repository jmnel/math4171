#pragma once

#include <Python.h>

#include <iostream>
#include <memory>
#include <vector>

#include "PythonObject.hpp"

using std::cout;
using std::endl;
using std::shared_ptr;
using std::string;
using std::vector;

namespace arc {

    class PythonContext;
    class PythonObject;

    class PythonList : public PythonObject {
    public:
        PythonList();
        virtual ~PythonList();

        virtual PythonObject::Type getType() const;
        // size_t getSize() const;

        void push_back(shared_ptr<PythonObject> object);
        shared_ptr<PythonObject> getAt(size_t n) const;
        void setAt(size_t n, shared_ptr<PythonObject> pythonObject);

        size_t getSize() const;

        shared_ptr<PythonObject> operator[](const size_t i);
        //double &operator[](const size_t i);
        //double const &operator[](const size_t i) const;
        //PythonList &operator=(PythonList const &t);

    private:
        static shared_ptr<PythonList>

        create();

        friend class PythonContext;
        friend class PythonFunction;

    private:
        size_t size = 0;
        vector<shared_ptr<PythonObject>> members;
    };
}
