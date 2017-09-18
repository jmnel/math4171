// -- Calculations for assignment 1 --
// -- Chapter 3: Exercise 1 ----------

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include <Vec.hpp>

//#include "../../include/matplotlibcpp.h"
#include "PythonContext.hpp"
#include "PythonFunction.hpp"
//#include "NelderMeadMinimize.hpp"

//#ifdef _WIN32
//#elif __APPLE__
//#elif __linux__
//#include <unistd.h>
//#endif

using std::cout;
using std::endl;
using std::vector;
using std::string;

using namespace arc;

int main(int argc, char* argv[]) {
    PythonContext pythCtx;
    pythCtx.initialize();
    pythCtx.appendToPath(
        "/home/jacques/repos/math4171/src/arcmath/pythonscripts/");
    auto foo = pythCtx.loadModule( "foo" );
    auto bar = pythCtx.loadFunction( foo, "bar" );
    auto args = pythCtx.createTupple( 3 );
    bar->call( args );
}
