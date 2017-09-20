#include <PythonFloat.hpp>
#include <PythonFunction.hpp>
#include <PythonList.hpp>
#include <PythonModule.hpp>
#include <PythonTuple.hpp>

#include "ContourPlot.hpp"

namespace arc::plot {

    // -- Constructor --
    ContourPlot::ContourPlot() {}

    // -- Destructor --
    ContourPlot::~ContourPlot() {}

    ContourPlot ContourPlot::contourPlot(vector<vector<double>> const &x,
                                         vector<vector<double>> const &y,
                                         vector<vector<double>> const &z) {
        assert(x.size() == y.size());
        assert(y.size() == z.size());

        PythonModule module("arcplots");
        PythonFunction func(module, "contourPlot");

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

        auto args = PythonTuple(3);
        args.setAt(0, xPython);
        args.setAt(1, yPython);
        args.setAt(2, zPython);

        auto pyObject = func.call(args);
        assert(pyObject.isValid());

        ContourPlot p;
        p.pyObject = pyObject;

        cout << "`ContourPlot` created." << endl;
        return p;
    }

}  // namespace arc::plot
