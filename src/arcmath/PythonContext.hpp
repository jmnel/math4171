#pragma once

#include <Python.h>

#include "IPythonContext.hpp"

namespace arc {

    class PythonContext : public IPythonContext {
    public:
        PythonContext();
        virtual ~PythonContext();

        void initialize();
    };
}
