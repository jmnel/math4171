#include <PythonCommon.hpp>
#include <PythonModule.hpp>
#include <PythonFunction.hpp>
#include <PythonFloat.hpp>
#include <PythonTuple.hpp>

#include "Axes.hpp"

namespace arc::plot {

    // -- Constructor --
    Axes::Axes() {}

    Axes::Axes(PythonObject const &pythonAxesObject) {
        this->pythonAxesObject = pythonAxesObject;
        cout << "Axes created." << endl;
    }

    // -- Destructor --
    Axes::~Axes() {}

    bool Axes::isValid() const {
        return pythonAxesObject.isValid();
    }

    ListPlot Axes::listPlot(vector<double> const &x, vector<double> const &y) {
        return ListPlot::listPlot(x, y);
    }

    SurfacePlot Axes::surfacePlot(vector<vector<double>> const &x,
                                  vector<vector<double>> const &y,
                                  vector<vector<double>> const &z) {
        assert(pythonAxesObject.isValid());
        return SurfacePlot::surfacePlot(pythonAxesObject, x, y, z);
    }

    ContourPlot Axes::contourPlot(vector<vector<double>> const &x,
                                  vector<vector<double>> const &y,
                                  vector<vector<double>> const &z) {
        return ContourPlot::contourPlot(x, y, z);
    }

    void Axes::setAxesLimitX(double xMin, double xMax) {
        cout << "Setting x limits." << endl;
        assert(xMin < xMax);
        assert(pythonAxesObject.isValid());
        PythonModule m("arcplots");
        assert(m.isValid());
        PythonFunction f(m, "setAxesLimitX");

        //PythonObject o;
        //o = pythonAxesObject;

        PythonTuple a(3);
        //auto adr = pythonOmToApiCast( o );
        //cout << "adr2=" << std::hex << adr << endl;
        //cout << "id=" << pythonAxesObject.getId() << endl;
        //a.setAt(0, o);
        auto p1 = PythonFloat(xMin);
        auto p2 = PythonFloat(xMax);
        a.setAt(0, pythonAxesObject);
        a.setAt(1, p1);
        a.setAt(2, p2);
        //a.setAt(1, p2);
        cout << "precall" << endl;
        
        f.call(pythonAxesObject);
    }

    void Axes::setAxesLimitY(double yMin, double yMax) {
        assert(yMin < yMax);
        assert(pythonAxesObject.isValid());
        PythonModule m("arcplots");
        PythonFunction f(m, "setAxesLimitY");
        PythonTuple a(3);
        auto adr = pythonOmToApiCast( pythonAxesObject );
        cout << "adr2=0x" << std::hex << adr << endl;
        a.setAt(0, pythonAxesObject);
        a.setAt(1, PythonFloat(yMin));
        a.setAt(2, PythonFloat(yMax));
        f.call(a);
    }
}  // namespace arc::plot
