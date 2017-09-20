// -- Calculations for assignment 1 --
// -- Chapter 3: Exercise 1 ----------

#include <cstdlib>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include <Vec.hpp>

#include <PythonCommon.hpp>
#include <PythonContext.hpp>
#include <PythonFloat.hpp>
#include <PythonFunction.hpp>
#include <PythonModule.hpp>

#include <ContourPlot.hpp>
#include <ListPlot.hpp>
#include <SurfacePlot.hpp>
#include <Figure.hpp>

//#include "MinNelderMead.hpp"

//#ifdef _WIN32
//#elif __APPLE__
//#elif __linux__
//#include <unistd.h>
//#endif

using std::cout;
// using std::dynamic_pointer_cast;
using std::endl;
using std::shared_ptr;
using std::string;
using std::vector;

// using namespace arc;
using namespace arc;

int main(int argc, char* argv[]) {
    auto func1 = [](Vec2d x) {
        auto term1 = (1.0 - x[0]);
        term1 = term1 * term1;
        auto term2 = x[1] - x[0] * x[0];
        term2 = term2 * term2 * 100;
        return term1 + term2;
        // return sin(x[0] * x[0] + x[1] * x[1]);
    };

    Vec2d xMin(-1.5, -0.5);
    Vec2d xMax(1.5, 2.0);

    arc::python::appendToPath(
        "/home/jacques/repos/math4171/src/arcplot/pythonscripts");

    arc::plot::Figure fig;
    auto axes = fig.getCurrentAxes();

    vector<vector<double>> x;
    vector<vector<double>> y;
    vector<vector<double>> z;

    for( int i = 0; i < 100; i++ ) {
        x.push_back( vector<double>() );
        y.push_back( vector<double>() );
        z.push_back( vector<double>() );
        for( int j = 0; j < 100; j++ ) {
            double xVal = -0.5 + i * 0.01;
            double yVal = -0.5 + j * 0.01;
            double zVal = xVal * xVal + yVal * yVal;
            x.back().push_back( xVal );
            y.back().push_back( yVal );
            z.back().push_back( zVal );
        }
    }
    //for (int i = 0; i < 100; i++) {
        //double xI = 0.1 * i;
        //double yI = sin(xI);
        //x.emplace_back(xI);
        //y.emplace_back(yI);
    //}

    auto plot1 = plot::surfacePlot(x, y,z);

    fig.show();
    fig.save("/home/jacques/foo.pdf");
}
