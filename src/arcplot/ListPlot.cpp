#include <PythonFloat.hpp>
#include <PythonFunction.hpp>
#include <PythonList.hpp>
#include <PythonModule.hpp>
#include <PythonTuple.hpp>

#include "ListPlot.hpp"

namespace arc::plot {

    // -- Constructor --
    ListPlot::ListPlot() {
    }

    // -- Destructor --
    ListPlot::~ListPlot() {}

    ListPlot listPlot(vector<double> const &x, vector<double> const &y) {
        assert(x.size() == y.size() );
        //assert(pythonListPlotObject.isValid());
        PythonModule plottingModule("arcplots");
        PythonFunction func(plottingModule, "listPlot");

        auto xPython = PythonList();
        auto yPython = PythonList();

        for( size_t i = 0; i < x.size(); i++ ) {
            auto xPythonFloat = PythonFloat( x[ i ] );
            auto yPythonFloat = PythonFloat( y[i] );
            xPython.pushBack( xPythonFloat );
            yPython.pushBack( yPythonFloat );
        }

        assert(xPython.isValid());
        assert(yPython.isValid());

        auto args = PythonTuple(2);
        assert(args.isValid());
        args.setAt(0, xPython);
        args.setAt(1, yPython);

        auto pythonListPlotObject = func.call( args );
        assert(pythonListPlotObject.isValid());

        ListPlot p;
        p.pythonListPlotObject = pythonListPlotObject;

        cout << "`ListPlot` created." << endl;

        return p;
    }
}
