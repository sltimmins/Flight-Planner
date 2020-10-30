//
// Created by Sammy Timmins on 10/21/20.
//

#include "FlightAdjacencyList.h"

FlightAdjacencyList::FlightAdjacencyList(const FlightAdjacencyList &copy)
{
    flights = copy.flights;
}

FlightAdjacencyList &FlightAdjacencyList::operator=(const FlightAdjacencyList &copy)
{
    flights = copy.flights;
    return *this;
}

/**
 * checks if the origin already exists in the adjacency list
 * if the origin does not exist it creates a new inner list for the new origin in the adjacency list
 * if the origin already exists it does nothing
 */

void FlightAdjacencyList::addOrigin(const Flight &origin)
{
    int index = findOrigin(origin);

    if(index == -1) //if the origin does not already exist
    {
        DSLinkedList<Flight> newOrigin; //creates new list for flights from the new origin

        newOrigin.add(origin);
        flights.add(newOrigin);
    }
}

/**
 * adds the destination to the specifc origin's list
 * adds the destination as a new origin in the adjacency list
 * adds the original origin as a destination to the new origin list
 * changes the private data members for the new destination
 */

void FlightAdjacencyList::addDestination(const Flight &origin, const Flight &destination)
{
    //finding the index of the origins list, adding the origin if it does not already exist
    int originIndex = findOrigin(origin);
    if(originIndex == -1)
    {
        addOrigin(origin);
        originIndex == findOrigin(origin);
    }
    flights.at(originIndex).add(destination); //adding the destination to the origin's list
    //creating flights to add the return flights to adjacency list
    Flight returnOrigin(destination.getDest());
    Flight returnDestination(origin.getDest(), destination.getPrice(), destination.getTime(), destination.getAirline());

    addOrigin(returnOrigin); //adding the destination as a new origin
    int returnOriginIndex = findOrigin(returnOrigin); //finding the index for where the new origin is

    if(!findDestination(returnOriginIndex, returnDestination)) //base case to break recursive function call, if the destination is already in the origin
    {
        addDestination(returnOrigin, returnDestination); //adds the original origin to the new origin
    }
}

/**
 * Finds the flight origin at the head of the inner linked list nodes
 * returns the index for the outer linked list or -1 if the index does not exist
 */

int FlightAdjacencyList::findOrigin(const Flight &toFind) {
        int index = -1;

        for(int i = 0; i < flights.getSize(); i++) //loop through the list of origins
        {
            if(flights.at(i).at(0) == toFind) //if the head of the inner list is the origin
            {
                index = i;
                break;
            }
        }

        return index;
}

/**
 * Finds the index of the destination within the specific inner origin linked list
 * Returns the index of the destination or -1 if the destination does not exist
 */

int FlightAdjacencyList::findDestination(const int originIndex, const Flight &toFind)
{
    for(int i = 0; i < flights.at(originIndex).getSize(); i++)
    {
        if(flights.at(originIndex).at(i).checkAllMembers(toFind))
        {
            return true;
        }
    }
    return false;
}

DSLinkedList<Flight> FlightAdjacencyList::at(const int x) {
    return flights.at(x);
}
