#include <iostream>

#include "PythonContext.hpp"

using std::cout;
using std::endl;

namespace arc {

    // -- Constructor --
    PythonContext::PythonContext() {}

    // -- Destructor --
    PythonContext::~PythonContext() {}

    void PythonContext::initialize() { cout << "initializing python" << endl; }
}
