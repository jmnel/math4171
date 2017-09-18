#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "PythonContext.hpp"

using std::cout;
using std::endl;

namespace arc {

    // -- Constructor --
    PythonContext::PythonContext() {}

    // -- Destructor --
    PythonContext::~PythonContext() {}

    void PythonContext::initialize() {
        auto env = getenv("PYTHONPATH");

        setenv("PYTHONPATH", ".", 1);

        cout << "initializing python" << endl;
        Py_Initialize();
        PyRun_SimpleString("import sys");
        PyRun_SimpleString(
                "sys.path.append(\"/home/jacques/repos/math4171/src/arcmath/"
                "pythonscripts\")");

        char cwd[1023];
        getcwd(cwd, sizeof(cwd));
        cout << "cwd=" << cwd << endl;

        PyObject* pName;
        PyObject* pModule;
        pName = PyUnicode_DecodeFSDefault("foo");
        pModule = PyImport_Import(pName);
        Py_DECREF(pName);

        assert(pModule);
        if (pModule != nullptr) {
            auto pFunction = PyObject_GetAttrString(pModule, "bar");

            if (pFunction && PyCallable_Check(pFunction)) {
                auto pArgs = PyTuple_New(1);
                auto pValue = PyFloat_FromDouble(12.3);
                assert(pValue);
                PyTuple_SetItem(pArgs, 0, pValue);
                pValue = PyObject_CallObject(pFunction, pArgs);
                Py_DECREF(pArgs);
            }
        } else {
            PyErr_Print();
        }
        Py_Finalize();
    }
}  // namespace arc
