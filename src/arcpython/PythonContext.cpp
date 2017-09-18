#include <iostream>

#include "PythonFunction.hpp"
#include "PythonModule.hpp"
#include "PythonTupple.hpp"

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
            Py_Finalize();
        }
    }

    void PythonContext::initialize() {
        cout << "Info: Initializing Python 3.6.1 context." << endl;
        Py_Initialize();
        isInitializedFlag = true;
    }

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

    shared_ptr<PythonFunction> PythonContext::loadFunction( shared_ptr<PythonModule> module, string const &name ) {
        return PythonFunction::create( module, name );
    }

    shared_ptr<PythonModule> PythonContext::loadModule( string const &name ) {
        return PythonModule::create( name );
    }

    shared_ptr<PythonTupple> PythonContext::createTupple(size_t size) {
        return PythonTupple::create(size);
        cout << "Creating tupple" << endl;
    }

}  // namespace arc
