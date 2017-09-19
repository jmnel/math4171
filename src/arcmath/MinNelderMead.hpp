#pragma once

#include <array>
#include <functional>
#include <iostream>

#include <CoreMath.hpp>
#include <Vec.hpp>

using std::array;
using std::cout;
using std::endl;
using std::function;

namespace arc {

    using Simplex2d = array<Vec2d, 3>;

    Vec2d minimizeNelderMead(const function<double>(Vec2d)> &obj,
                             Simplex2d const &initialSimplex, double tol,
                             size_t maxIterations, bool verbose = false);
}
