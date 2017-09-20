#pragma once

#include <array>
#include <iostream>
#include <vector>

#include <Vec.hpp>
#include <PythonObject.hpp>

namespace arc::plot {

    using namespace arc::python;

    class SurfacePlot;
    SurfacePlot surfacePlot(vector<vector<double>> const &x,
                            vector<vector<double>> const &y,
                            vector<vector<double>> const &z);

    class SurfacePlot {
    public:
        SurfacePlot();
        virtual ~SurfacePlot();

    private:
        PythonObject pyObject;
        friend SurfacePlot surfacePlot(vector<vector<double>> const &x,
                                       vector<vector<double>> const &y,
                                       vector<vector<double>> const &z);
    };
}  // namespace arc::plot
