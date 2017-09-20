#pragma once

#include <iostream>
#include <functional>
#include <vector>

#include <Vec.hpp>

using std::cout;
using std::endl;
using std::function;
using std::vector;

namespace arc {

    void plotContourFunction(const function<double(Vec2d)> &f,
                             Vec2d const &dMin, Vec2d const &dMax, uint stepsX,
                             uint stepsY, vector<Vec2d[3]> triangles);
}
