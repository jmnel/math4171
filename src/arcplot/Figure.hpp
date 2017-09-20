#pragma once

#include <string>

#include <PythonObject.hpp>
#include <PythonModule.hpp>

#include "Axes.hpp"

using std::string;

namespace arc::plot {

    using namespace python;
   
    class Figure {
    public:
        Figure();
        virtual ~Figure();

        Axes getCurrentAxes();
        void show();
        void save(string const &path);
        void setLayoutTight();

    private:
        PythonObject pythonFigureObject;
        PythonModule module;
    };
}
