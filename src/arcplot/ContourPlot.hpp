#pragma once

#include <array>
#include <iostream>
#include <vector>

#include <Vec.hpp>
#include <PythonObject.hpp>

namespace arc::plot {

    using namespace arc::python;

    class ContourPlot;
    ContourPlot contourPlot(vector<vector<double>> const &x,
                            vector<vector<double>> const &y,
                            vector<vector<double>> const &z);

    class ContourPlot {
    public:
        ContourPlot();
        virtual ~ContourPlot();

    private:
        PythonObject pyObject;
        friend ContourPlot contourPlot(vector<vector<double>> const &x,
                                       vector<vector<double>> const &y,
                                       vector<vector<double>> const &z);
    };
}  // namespace arc::plot
