#pragma once

#include <iostream>

#include <PythonObject.hpp>

using std::cout;
using std::endl;

namespace arc::plot {

    using namespace arc::python;

    class Axes {
    public:
        Axes();
        Axes( PythonObject const &pythonAxesObject);
        virtual ~Axes();

    private:
        PythonObject pythonAxesObject;
    };
}
