#pragma once

#include <memory>
#include <string>
#include <vector>

#include <Python.h>

using std::shared_ptr;
using std::string;
using std::vector;

namespace arc {

    class PythonFloat;
    class PythonFunction;
    class PythonList;
    class PythonModule;
    class PythonTupple;

    class PythonContext {
    public:
        PythonContext();
        ~PythonContext();
        void initialize();

        void destroy();

        void appendToPath(string const &path);

        shared_ptr<PythonFunction> loadFunction(shared_ptr<PythonModule> module,
                                                string const &name);

        shared_ptr<PythonModule> loadModule(string const &moduleName);

        shared_ptr<PythonFloat> createFloat(double v);
        shared_ptr<PythonList> createList(size_t size);

        shared_ptr<PythonTupple> createTupple(size_t size);

    private:
        bool isInitializedFlag = false;
    };
}  // namespace arc
