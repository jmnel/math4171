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

    // -- getCurrentAxes function --
    Axes Figure::getCurrentAxes() {
        PythonFunction getCurrentAxes(module, "getCurrentAxes");
        auto axesPythonObj = getCurrentAxes.call(pythonFigureObject);
        return Axes(axesPythonObj);
    }

    // -- show function --
    void Figure::show() {
        PythonFunction showFunc(module, "showFigure");
        showFunc.call(pythonFigureObject);
    }

    // -- save function --
    void Figure::save( string const &path ) {
        assert(!path.empty());
        PythonFunction saveFunc(module, "saveFigure");
        PythonString pyPath(path);
        PythonTuple args(2);
        args.setAt(0, pythonFigureObject);
        args.setAt(1, pyPath);
        saveFunc.call(args);
    }

    // -- setLayoutTight function --
    void Figure::setLayoutTight() {
        PythonFunction f(module, "setLayoutTight");
        f.call();
    }

}  // namespace arc::plot
