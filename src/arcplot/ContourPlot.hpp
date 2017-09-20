#pragma once

#include <array>
#include <iostream>
#include <vector>

#include <Vec.hpp>
#include <PythonObject.hpp>

using std::vector;

namespace arc::plot {

    using namespace arc::python;

    // class ContourPlot;
    // ContourPlot contourPlot(vector<vector<double>> const &x,
    // vector<vector<double>> const &y,
    // vector<vector<double>> const &z);
    class Axes;

    class ContourPlot {
    public:
        ContourPlot();
        virtual ~ContourPlot();

    private:
        PythonObject pyObject;
        static ContourPlot contourPlot(vector<vector<double>> const &x,
                                       vector<vector<double>> const &y,
                                       vector<vector<double>> const &z);

        friend class Axes;
    };
}  // namespace arc::plot
