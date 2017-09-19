// -- Calculations for assignment 1 --
// -- Chapter 3: Exercise 1 ----------

#include <cstdlib>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include <Vec.hpp>

//#include "../../include/matplotlibcpp.h"
#include "PythonContext.hpp"
#include "PythonFloat.hpp"
#include "PythonFunction.hpp"
#include "PythonList.hpp"
#include "PythonObject.hpp"
#include "PythonTupple.hpp"

#include "SurfPlot3d.hpp"

//#include "NelderMeadMinimize.hpp"

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

    plotSurface3dFunction(func1, xMin, xMax, 50, 50);

    // PythonContext pythCtx;
    // pythCtx.initialize();
    // pythCtx.appendToPath(
    //"/home/jacques/repos/math4171/src/arcplot/pythonscripts/");
    // auto foo = pythCtx.loadModule("arcplots");
    // auto plotSurfcace3dFunction = pythCtx.loadFunction(foo, "plotSurface3d");
    // auto args = pythCtx.createTupple(3);

    // auto X = pythCtx.createList(10);
    // auto Y = pythCtx.createList(10);
    // auto Z = pythCtx.createList(10);

    // for (int iY = 0; iY < X->getSize(); iY++) {
    // auto v = pythCtx.createFloat(-5.0 + iY * 1.0);
    // auto row = pythCtx.createList(10);
    // auto col = pythCtx.createList(10);
    // auto zRow = pythCtx.createList(10);
    // for (size_t iX = 0; iX < row->getSize(); iX++) {
    // auto k = pythCtx.createFloat(-5.0 + iX * 1.0);
    // auto l = pythCtx.createFloat(-5.0 + iY * 1.0);
    // auto xVal = -5.0 + iX * 1.0;
    // auto yVal = -5.0 + iY * 1.0;

    // auto zVal = pythCtx.createFloat(xVal * xVal + yVal * yVal);
    // row->setAt(iX, k);
    // col->setAt(iX, l);
    // zRow->setAt(iX, zVal);
    //}
    // X->setAt(iY, row);
    // Y->setAt(iY, col);
    // Z->setAt(iY, zRow);
    //}

    // args->setAt(0, X);
    // args->setAt(1, Y);
    // args->setAt(2, Z);

    // plotSurfcace3dFunction->call(args);
}
