#include <PythonContext.hpp>
#include <PythonFloat.hpp>
#include <PythonFunction.hpp>
#include <PythonList.hpp>
#include <PythonTupple.hpp>

#include "SurfPlot3d.hpp"

using std::cout;
using std::endl;
using std::function;

namespace arc {

    // void plotSurface3dFunction(const function<double(Vec2d)>& f) {
    void plotSurface3dFunction(const function<double(Vec2d)> &f,
                               Vec2d const &dMin, Vec2d const &dMax, uint m,
                               uint n) {
        cout << "plotting func" << endl;

        assert(m > 1);
        assert(n > 1);

        assert(dMin.x < dMax.x);
        assert(dMin.y < dMax.y);

        PythonContext ctx;
        ctx.initialize();

        ctx.appendToPath(
            "/home/jacques/repos/math4171/src/arcplot/pythonscripts");
        auto arcplotsModule = ctx.loadModule("arcplots");
        auto plottingFunction =
            ctx.loadFunction(arcplotsModule, "plotSurface3d");

        auto x = ctx.createList(n);
        auto y = ctx.createList(n);
        auto z = ctx.createList(n);

        auto xInterval = (dMax.x - dMin.x) * 1.0 / m;
        auto yInterval = (dMax.y - dMin.y) * 1.0 / n;

        // Set x matrix : n rows and m columns
        for (int i = 0; i < (int)n; i++) {
            auto rowX = ctx.createList(m);
            auto rowY = ctx.createList(m);
            auto rowZ = ctx.createList(m);
            for (int j = 0; j < (int)m; j++) {
                auto xVal = dMin.x + j * xInterval;
                auto yVal = dMin.y + i * yInterval;
                // auto zVal = xVal * xVal + yVal * yVal;
                auto zVal = f(Vec2d(xVal, yVal));

                auto kX = ctx.createFloat(xVal);
                auto kY = ctx.createFloat(yVal);
                auto kZ = ctx.createFloat(zVal);
                rowX->setAt(j, kX);
                rowY->setAt(j, kY);
                rowZ->setAt(j, kZ);
            }
            x->setAt(i, rowX);
            y->setAt(i, rowY);
            z->setAt(i, rowZ);
        }

        auto args = ctx.createTupple(3);
        args->setAt(0, x);
        args->setAt(1, y);
        args->setAt(2, z);

        plottingFunction->call(args);
    }
}
