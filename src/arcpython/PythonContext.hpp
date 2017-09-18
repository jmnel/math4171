#pragma once

#include <memory>
#include <string>
#include <vector>

#include <Python.h>

using std::shared_ptr;
using std::string;
using std::vector;

namespace arc {

    class PythonFunction;
    class PythonModule;
    class PythonTupple;

    class PythonContext {
    public:
        PythonContext();
        ~PythonContext();
        void initialize();

        void appendToPath(string const &path);

        shared_ptr<PythonFunction> loadFunction(shared_ptr<PythonModule> module,
                                                string const &name);

        shared_ptr<PythonModule> loadModule(string const &moduleName);

        shared_ptr<PythonTupple> createTupple(size_t size);

    private:
        bool isInitializedFlag = false;
    };
}  // namespace arc
