#pragma once

#include <array>
#include <iostream>
#include <vector>

#include <Vec.hpp>

#include <PythonObject.hpp>

using std::array;
using std::cout;
using std::endl;
using std::vector;

namespace arc::plot {

    using namespace arc::python;

    class ListPlot;
    ListPlot listPlot(vector<double> const &x, vector<double> const &y);

    class ListPlot {
    public:
        ListPlot();
        // ListPlot(PythonObject const &pythonListPlotObject);
        virtual ~ListPlot();

    private:
        PythonObject pythonListPlotObject;

        friend ListPlot listPlot(vector<double> const &, vector<double> const &);
    };

    //ListPlot listPlot(vector<Vec2d> const &x, vector<Vec2d> const &y);
}  // namespace arc::plot
