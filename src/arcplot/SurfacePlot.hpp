#pragma once

#include <array>
#include <iostream>
#include <vector>

#include <Vec.hpp>
#include <PythonObject.hpp>

using std::vector;

namespace arc::plot {

    using namespace arc::python;

    class Axes;

    class SurfacePlot {
    public:
        SurfacePlot();
        virtual ~SurfacePlot();

    private:
        PythonObject pyObject;
        static SurfacePlot surfacePlot( PythonObject axes, vector<vector<double>> const &x,
                                       vector<vector<double>> const &y,
                                       vector<vector<double>> const &z);

        friend class Axes;
    };
}  // namespace arc::plot
