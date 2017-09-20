#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
#include <vector>

#include <CoreMath.hpp>
#include <Vec.hpp>

using std::array;
using std::cout;
using std::endl;
using std::function;
using std::vector;

namespace arc {

    typedef array<Vec2d,3> Simplex2d;
    //using Simplex2d = array<Vec2d, 3>;

    /**
     * 
     * @brief Minimizes function using Nelder-Mead polytope algorithm.
     * @brief Iterates f
     * @param obj Objective function to minimize
     * @param initialSimplex Starting polytop
     * @param tol Desired tolerance for solution
     * @param maxIterations Maximum number of iterations
     * @param alpha Reflection coefficient $\alpha$
     * @param beta Reflection coefficient $\beta$
     * @param gamma Contraction coefficient $\gamma$
     * @param verbose Enable verbose debug info
     * @return Solution to minimization of objective function
     * 
     **/
    Vec2d minimizeNelderMead(const function<double(Vec2d)> &obj,
                             Simplex2d initialSimplex, double tol,
                             size_t maxIterations, double aplha, double beta,
                             double gamma, bool verbose,
                             vector<Vec2d> &triangles, vector<Vec2d> &centers);
}
