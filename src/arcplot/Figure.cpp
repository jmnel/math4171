#include <PythonFunction.hpp>
#include <PythonModule.hpp>
#include <PythonString.hpp>
#include <PythonTuple.hpp>

#include "Figure.hpp"

namespace arc::plot {

    // -- Constructor --
    Figure::Figure() {
        // Load plotting module
        module = PythonModule("arcplots");
        PythonFunction createFigureFunction(module, "createFigure");
        pythonFigureObject = createFigureFunction.call();
    }

    // -- Destructor --
    Figure::~Figure() {}

    Axes Figure::getCurrentAxes() {
        // Load plotting module
        // PythonModule plottingModule("arcplots");
        PythonFunction getCurrentAxes(module, "getCurrentAxes");
        auto axesPythonObj = getCurrentAxes.call(pythonFigureObject);
        return Axes(axesPythonObj);
    }

    void Figure::show() {
        // PythonModule plottingModule("arcplots");
        PythonFunction showFunc(module, "showFigure");
        showFunc.call(pythonFigureObject);
    }

    void Figure::save( string const &path ) {
        assert(!path.empty());
        PythonFunction saveFunc(module, "saveFigure");
        PythonString pyPath(path);
        PythonTuple args(2);
        args.setAt(0, pythonFigureObject);
        args.setAt(1, pyPath);
        saveFunc.call(args);
    }

}  // namespace arc::plot
