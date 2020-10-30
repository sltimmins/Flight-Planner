#define CATCH_CONFIG_RUNNER

#include <fstream>
#include <iostream>
#include "catch.hpp"
#include "DSStack.h"
#include "FlightPlanner.h"

int runCatchTests(int argc, char* const argv[])
{
    return Catch::Session().run(argc, argv);
}

int main(int argc, char** argv) {
    if(argc == 1)
    {
        return runCatchTests(argc, argv);
    }
    else
    {
        std::ifstream data, paths;
        std::ofstream plans;

        data.open(argv[1]);
        paths.open(argv[2]);
        plans.open(argv[3]);

        planFlights(data, paths, plans);

        data.close();
        paths.close();
        plans.close();
    }

    return 0;
}

