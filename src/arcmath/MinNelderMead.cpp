#include "MinNelderMead.hpp"

namespace arc {

    Vec2d minimizeNelderMead(const function<double>(Vec2d)> &obj,
                             Simplex2d const &initialSimplex, double tol,
                             size_t maxIterations, bool verbose ) {
    
        return Vec2d( 0.0 );
    }
}
