#pragma once

#include <iostream>
#include <vector>
#include <string>

#include <PythonObject.hpp>

#include "ContourPlot.hpp"
#include "ListPlot.hpp"
#include "SurfacePlot.hpp"

using std::cout;
using std::endl;
using std::string;
using std::vector;

namespace arc::plot {

    using namespace arc::python;

    /**
     * 
     * @brief Object representing graphing axes set.
     * @detail Implements a wrapper aound matplotlib axes.
     * 
     **/
    class Axes {
    public:
        Axes();
        Axes(PythonObject const &pythonAxesObject);
        virtual ~Axes();

        bool isValid() const;
        /**
         * 
         * @brief Plots a list of points.
         * @detail Implements a wrapper around matplotlib plt.plot.
         * 
         **/
        ListPlot listPlot(vector<double> const &x, vector<double> const &y);

        /**
         * 
         * @brief Plots a 3D surface of the function $z=f(x,y)$.
         * @detail Implements a wrapper around matplotlib axes.plot_surface.
         * @param x 2D array containing $x$ values.
         * @param y 2D array containing $y$ values.
         * @param z 2D array containing $z$ values.
         * 
         **/
        SurfacePlot surfacePlot(vector<vector<double>> const &x,
                                vector<vector<double>> const &y,
                                vector<vector<double>> const &z);

        /**
         * 
         * @brief Creates a contour plot of the function $z=f(x,y)$.
         * @detail Implements a wrapper around matplotlib plt.plot.
         * @param x 2D array containing $x$ values.
         * @param y 2D array containing $y$ values.
         * @param z 2D array containing $z$ values.
         * 
         **/
        ContourPlot contourPlot(vector<vector<double>> const &x,
                                vector<vector<double>> const &y,
                                vector<vector<double>> const &z);

        void setAxesLimitX( double xMin, double xMax );
        void setAxesLimitY( double yMin, double yMax );
        void setAxesLabelX( string const &xLabel );
        void setAxesLabelY( string const &yLabel );
    public:
        PythonObject pythonAxesObject;
    };
}  // namespace arc::plot
