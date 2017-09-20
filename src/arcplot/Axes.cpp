#include "Axes.hpp"

namespace arc::plot {

    // -- Constructor --
    Axes::Axes() {}

    Axes::Axes(PythonObject const &pythonAxesObject)
        : pythonAxesObject(pythonAxesObject) {
        cout << "Axes created." << endl;
    }

    // -- Destructor --
    Axes::~Axes() {}

}  // namespace arc
