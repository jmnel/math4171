// -- Calculations for assignment 1 --
// -- Chapter 3: Exercise 1 ----------

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include <Vec.hpp>

//#include "../../include/matplotlibcpp.h"

#ifdef _WIN32
#elif __APPLE__
#elif __linux__
#include <unistd.h>
#endif

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(int argc, char* argv[]) {
    string cmd1 = "ls -l";

    int pipeFd[2], rs;

    rs = pipe(pipeFd);
    if (rs < 0) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    cout << "hi" << endl;
}
