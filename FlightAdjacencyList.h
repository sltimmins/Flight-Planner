//
// Created by Sammy Timmins on 10/21/20.
//

#ifndef INC_20F_FLT_PLN_FLIGHTADJACENCYLIST_H
#define INC_20F_FLT_PLN_FLIGHTADJACENCYLIST_H

#include "DSLinkedList.h"
#include "Flight.h"

class FlightAdjacencyList
{
public:
    FlightAdjacencyList() = default;
    ~FlightAdjacencyList() = default;
    FlightAdjacencyList(const FlightAdjacencyList &copy);
    FlightAdjacencyList& operator=(const FlightAdjacencyList &copy);
    void addOrigin(const Flight &origin);
    void addDestination(const Flight &origin, const Flight &destination);
    int findOrigin(const Flight &toFind);
    int findDestination(const int originIndex, const Flight &toFind);
    DSLinkedList<Flight> at(const int x);

private:
    DSLinkedList<DSLinkedList<Flight>> flights;
};

#endif //INC_20F_FLT_PLN_FLIGHTADJACENCYLIST_H