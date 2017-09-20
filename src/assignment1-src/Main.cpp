// -- Calculations for assignment 1 --
// -- Chapter 3: Exercise 1 ----------

#include <cstdlib>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include <Vec.hpp>

#include "PythonContext.hpp"
#include "PythonFloat.hpp"
#include "PythonFunction.hpp"
#include "PythonList.hpp"
#include "PythonObject.hpp"
#include "PythonTuple.hpp"

#include <ContourPlot.hpp>
#include "SurfPlot3d.hpp"

#include "MinNelderMead.hpp"

//#ifdef _WIN32
//#elif __APPLE__
//#elif __linux__
//#include <unistd.h>
//#endif

using std::cout;
using std::dynamic_pointer_cast;
using std::endl;
using std::vector;
using std::shared_ptr;
using std::string;

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

    plotSurface3dFunction(func1, xMin, xMax, 20, 20);

    // xMin = {-4.0.0};
    // xMax = {4.0};
    plotContourFunction(func1, xMin, xMax, 200, 200);

    array<Vec2d, 3> start = {{Vec2d(0.0), Vec2d(0.1, 0.0), Vec2d(0.0, 0.1)}};

    vector<Vec2d[3]> polytopes;

    auto res = minimizeNelderMead(func1, start, 1E-12, 1000, 1.0, 2.0, 0.5, true, polytopes);
}
