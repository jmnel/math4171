#pragma once

#include <iostream>
#include <functional>

#include <Vec.hpp>

using std::cout;
using std::endl;
using std::function;

namespace arc {

    void plotSurface3dFunction(const function<double(Vec2d)> &f,
                               Vec2d const &dMin, Vec2d const &dMax,
                               uint stepsX, uint stepsY);
}
