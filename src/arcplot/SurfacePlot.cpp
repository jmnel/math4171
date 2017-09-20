#include <PythonFloat.hpp>
#include <PythonFunction.hpp>
#include <PythonList.hpp>
#include <PythonModule.hpp>
#include <PythonTuple.hpp>

#include "SurfacePlot.hpp"

namespace arc::plot {

    // -- Constructor --
    SurfacePlot::SurfacePlot() {}

    // -- Destructor --
    SurfacePlot::~SurfacePlot() {}

    SurfacePlot SurfacePlot::surfacePlot(PythonObject axes,
                                         vector<vector<double>> const &x,
                                         vector<vector<double>> const &y,
                                         vector<vector<double>> const &z) {
        assert(axes.isValid());

        assert(x.size() == y.size());
        assert(y.size() == z.size());

        PythonModule module("arcplots");
        PythonFunction func(module, "surfacePlot");

        auto xPython = PythonList();
        auto yPython = PythonList();
        auto zPython = PythonList();

        for (size_t i = 0; i < x.size(); i++) {
            auto xRow = PythonList();
            auto yRow = PythonList();
            auto zRow = PythonList();
            for (size_t j = 0; j < x[i].size(); j++) {
                xRow.pushBack(PythonFloat(x[i][j]));
                yRow.pushBack(PythonFloat(y[i][j]));
                zRow.pushBack(PythonFloat(z[i][j]));
            }
            assert(xRow.isValid());
            assert(yRow.isValid());
            assert(zRow.isValid());

            xPython.pushBack(xRow);
            yPython.pushBack(yRow);
            zPython.pushBack(zRow);
        }

        assert(xPython.isValid());
        assert(yPython.isValid());
        assert(zPython.isValid());

        auto args = PythonTuple(4);
        args.setAt(0, axes);
        args.setAt(1, xPython);
        args.setAt(2, yPython);
        args.setAt(3, zPython);

        auto pyObject = func.call(args);
        assert(pyObject.isValid());

        SurfacePlot p;
        p.pyObject = pyObject;

        cout << "`SurfacePlot` created." << endl;
        return p;
    }

}  // namespace arc::plot
