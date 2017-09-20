#include <iostream>

#include "PythonFloat.hpp"
#include "PythonFunction.hpp"
#include "PythonList.hpp"
#include "PythonModule.hpp"
#include "PythonTuple.hpp"

#include "PythonContext.hpp"

using std::cout;
using std::endl;

namespace arc {

    // -- Constructor --
    PythonContext::PythonContext() {}

    // -- Destructor --
    PythonContext::~PythonContext() {
        if (isInitializedFlag) {
            isInitializedFlag = false;
            //auto res = Py_FinalizeEx();
            cout << "Python context destroyed." << endl;
            //cout << "res=" << res << endl;
        }
    }

    // -- initialize function --
    void PythonContext::initialize() {
        cout << "Info: Initializing Python 3.6.2 context." << endl;
        Py_Initialize();
        // cout << "res=" << res << endl;
        isInitializedFlag = true;
        cout << "done" << endl;
    }

    // -- destroy function --
    void PythonContext::destroy() {
        assert(false);
        if (isInitializedFlag) {
            isInitializedFlag = false;
            // Py_FinalizeEx();
            // cout << "Info: Python 3.6.2 context destroyed." << endl;
        }
    }

    // -- appendToPath function --
    void PythonContext::appendToPath(string const &pathElement) {
        assert(isInitializedFlag);
        if (isInitializedFlag) {
            PyRun_SimpleString("import sys");

            string cmd = "sys.path.append(\"";
            cmd += pathElement;
            cmd += "\")";

            PyRun_SimpleString(cmd.c_str());
        }
    }

    shared_ptr<PythonFunction> PythonContext::loadFunction(
        shared_ptr<PythonModule> module, string const &name) {
        return PythonFunction::create(module, name);
    }

    shared_ptr<PythonModule> PythonContext::loadModule(string const &name) {
        return PythonModule::create(name);
    }

    shared_ptr<PythonFloat> PythonContext::createFloat(double v) {
        return PythonFloat::create(v);
    }

    shared_ptr<PythonList> PythonContext::createList() {
        return PythonList::create();
    }

    shared_ptr<PythonTuple> PythonContext::createTuple(size_t size) {
        return PythonTuple::create(size);
        cout << "Creating tupple" << endl;
    }

}  // namespace arc
