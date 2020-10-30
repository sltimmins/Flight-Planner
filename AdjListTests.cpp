//
// Created by Sammy Timmins on 10/25/20.
//

#include "catch.hpp"
#include "Flight.h"
#include "FlightAdjacencyList.h"

TEST_CASE("Adjacency List tests", "[FlightAdjacencyList]")
{
    Flight originOne("Dallas"), originTwo("Austin"), originThree("Chicago");
    Flight destOne("Los Angeles", 100.00, 50, "Delta"),
            destTwo("Washington", 300.00, 75, "American"),
            destThree("New York", 50.00, 100, "Delta"),
            destFour("Beaver Creek"), destFive("Denver");

    FlightAdjacencyList testAdjList;

    testAdjList.addOrigin(originOne);
    testAdjList.addOrigin(originTwo);
    testAdjList.addOrigin(originThree);

    SECTION("addOrigin()")
    {
        REQUIRE((testAdjList.findOrigin(originOne) == 0));
        REQUIRE((testAdjList.findOrigin(originTwo) == 1));
        REQUIRE((testAdjList.findOrigin(originThree) == 2));
    }
    //adding destinations
    testAdjList.addDestination(originOne, destOne);
    testAdjList.addDestination(originOne, destTwo);
    testAdjList.addDestination(originOne, destThree);

    testAdjList.addDestination(originTwo, destTwo);
    testAdjList.addDestination(originTwo, destOne);
    testAdjList.addDestination(originTwo, destThree);

    testAdjList.addDestination(originThree, destThree);
    testAdjList.addDestination(originThree, destTwo);
    testAdjList.addDestination(originThree, destOne);

    SECTION("addDestination()")
    {
        //testing that destinations were added to origins
        REQUIRE((testAdjList.findDestination(0, destOne)));
        REQUIRE((testAdjList.findDestination(0, destTwo)));
        REQUIRE((testAdjList.findDestination(0, destThree)));
        REQUIRE(!(testAdjList.findDestination(0, destFour)));
        REQUIRE(!(testAdjList.findDestination(0, destFive)));

        REQUIRE((testAdjList.findDestination(1, destTwo)));
        REQUIRE((testAdjList.findDestination(1, destOne)));
        REQUIRE((testAdjList.findDestination(1, destThree)));
        REQUIRE(!(testAdjList.findDestination(1, destFour)));
        REQUIRE(!(testAdjList.findDestination(1, destFive)));

        REQUIRE((testAdjList.findDestination(2, destThree)));
        REQUIRE((testAdjList.findDestination(2, destTwo)));
        REQUIRE((testAdjList.findDestination(2, destOne)));
        REQUIRE(!(testAdjList.findDestination(2, destFour)));
        REQUIRE(!(testAdjList.findDestination(2, destFive)));

        //testing that destinations were added as origins and origins were added as destinations
        //setting price, time, and airline to zero for find origin tests
        destOne.setAllZero();
        destTwo.setAllZero();
        destThree.setAllZero();

        REQUIRE((testAdjList.findOrigin(destOne) == 3));
        REQUIRE((testAdjList.findOrigin(destTwo) == 4));
        REQUIRE((testAdjList.findOrigin(destThree) == 5));

        //setting prices correctly for return flights for comparison
        originOne.setAll(100.00, 50, "Delta");
        originTwo.setAll(100.00, 50, "Delta");
        originThree.setAll(100.00, 50, "Delta");

        REQUIRE((testAdjList.findDestination(3, originOne)));
        REQUIRE((testAdjList.findDestination(3, originTwo)));
        REQUIRE((testAdjList.findDestination(3, originThree)));
        REQUIRE(!(testAdjList.findDestination(3, destFour)));
        REQUIRE(!(testAdjList.findDestination(3, destFive)));

        originOne.setAll(300.00, 75, "American");
        originTwo.setAll(300.00, 75, "American");
        originThree.setAll(300.00, 75, "American");

        REQUIRE((testAdjList.findDestination(4, originOne)));
        REQUIRE((testAdjList.findDestination(4, originTwo)));
        REQUIRE((testAdjList.findDestination(4, originThree)));
        REQUIRE(!(testAdjList.findDestination(4, destFour)));
        REQUIRE(!(testAdjList.findDestination(4, destFive)));

        originOne.setAll(50.00, 100, "Delta");
        originTwo.setAll(50.00, 100, "Delta");
        originThree.setAll(50.00, 100, "Delta");

        REQUIRE((testAdjList.findDestination(5, originOne)));
        REQUIRE((testAdjList.findDestination(5, originTwo)));
        REQUIRE((testAdjList.findDestination(5, originThree)));
        REQUIRE(!(testAdjList.findDestination(5, destFour)));
        REQUIRE(!(testAdjList.findDestination(5, destFive)));
    }

    SECTION("copy constructor and overloaded assignment operator")
    {
        FlightAdjacencyList assignmentAdjList, copyAdjList(testAdjList);
        assignmentAdjList = testAdjList;
        //copy constructor tests
        REQUIRE((copyAdjList.findOrigin(originOne) == 0));
        REQUIRE((copyAdjList.findOrigin(originTwo) == 1));
        REQUIRE((copyAdjList.findOrigin(originThree) == 2));

        REQUIRE((copyAdjList.findDestination(0, destOne)));
        REQUIRE((copyAdjList.findDestination(0, destTwo)));
        REQUIRE((copyAdjList.findDestination(0, destThree)));
        REQUIRE(!(copyAdjList.findDestination(0, destFour)));
        REQUIRE(!(copyAdjList.findDestination(0, destFive)));

        REQUIRE((copyAdjList.findDestination(1, destTwo)));
        REQUIRE((copyAdjList.findDestination(1, destOne)));
        REQUIRE((copyAdjList.findDestination(1, destThree)));
        REQUIRE(!(copyAdjList.findDestination(1, destFour)));
        REQUIRE(!(copyAdjList.findDestination(1, destFive)));

        REQUIRE((copyAdjList.findDestination(2, destThree)));
        REQUIRE((copyAdjList.findDestination(2, destTwo)));
        REQUIRE((copyAdjList.findDestination(2, destOne)));
        REQUIRE(!(copyAdjList.findDestination(2, destFour)));
        REQUIRE(!(copyAdjList.findDestination(2, destFive)));

        //assignment operator tests
        REQUIRE((assignmentAdjList.findOrigin(originOne) == 0));
        REQUIRE((assignmentAdjList.findOrigin(originTwo) == 1));
        REQUIRE((assignmentAdjList.findOrigin(originThree) == 2));

        REQUIRE((assignmentAdjList.findDestination(0, destOne)));
        REQUIRE((assignmentAdjList.findDestination(0, destTwo)));
        REQUIRE((assignmentAdjList.findDestination(0, destThree)));
        REQUIRE(!(assignmentAdjList.findDestination(0, destFour)));
        REQUIRE(!(assignmentAdjList.findDestination(0, destFive)));

        REQUIRE((assignmentAdjList.findDestination(1, destTwo)));
        REQUIRE((assignmentAdjList.findDestination(1, destOne)));
        REQUIRE((assignmentAdjList.findDestination(1, destThree)));
        REQUIRE(!(assignmentAdjList.findDestination(1, destFour)));
        REQUIRE(!(assignmentAdjList.findDestination(1, destFive)));

        REQUIRE((assignmentAdjList.findDestination(2, destThree)));
        REQUIRE((assignmentAdjList.findDestination(2, destTwo)));
        REQUIRE((assignmentAdjList.findDestination(2, destOne)));
        REQUIRE(!(assignmentAdjList.findDestination(2, destFour)));
        REQUIRE(!(assignmentAdjList.findDestination(2, destFive)));
    }
}