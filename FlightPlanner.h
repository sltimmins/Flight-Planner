//
// Created by Sammy Timmins on 10/26/20.
//

#ifndef INC_20F_FLT_PLN_FLIGHTPLANNER_H
#define INC_20F_FLT_PLN_FLIGHTPLANNER_H

#include "Flight.h"
#include "FlightPlan.h"
#include "FlightAdjacencyList.h"
#include "DSStack.h"
#include "DSVector.h"

DSString getline(DSString &line, int &i, const char delim)
{
    DSString word;
    while((line[i] != delim) && (i < line.getLength()))
    {
        word = word + line[i];
        ++i;
    }

    return word;
}

/**
 * reads in the flight data from the input file
 * parses the data into the correct types
 * creates origin flights and destination flights
 */

void readIntoAdjList(ifstream &input, FlightAdjacencyList &flights)
{
    char buffer[100];
    input.getline(buffer, 100);
    DSString numFlightsConversion = buffer;

    while(input.getline(buffer, 100))
    {
        DSString line = buffer;
        for(int i = 0; i < line.getLength();)
        {
            DSString word;

            word = getline(line, i, '|');

            Flight origin(word);
            flights.addOrigin(origin);
            ++i;

            word = getline(line, i, '|');

            DSString destination = word;
            ++i;

            word = getline(line, i, '|');

            float price = word.dsstof();
            ++i;

            word = getline(line, i, '|');

            int time = word.dsstoi();
            ++i;

            word = getline(line, i, '|');

            Flight dest(destination, price, time, word);
            flights.addDestination(origin, dest);
        }
    }
}

/**
 * iterative backtracking function to find all the potential flight paths
 */

void checkConnections(FlightAdjacencyList &flights, DSStack<Flight> &stack, DSVector<FlightPlan> &plansToReturn, const Flight &origin, const Flight &destination)
{
    if(stack.peek() == destination) //if the destination city has been found
    {
        FlightPlan plan;
        plan.addPlan(stack.getList()); //adds the stack to the flight plan to be added to the list of plans
        plansToReturn.push_back(plan); //adds the flight plan to the
        stack.pop(); //pops the destination city off the stack to find the next path
    }
    else
    {
        int originIndex = flights.findOrigin(origin);
        DSLinkedList<Flight> connections = flights.at(originIndex);
        for (int i = 1; i <= connections.getSize(); i++)
        {
            if(i == connections.getSize()) //if the iterator has reached the end of the connections list for that city
            {
                stack.pop();
            }
            else if (!stack.search(connections.at(i))) //if the city is not already in the stack
            {
                stack.push(connections.at(i));
                //recursive call to check connections to check the connection flights for the next city
                checkConnections(flights, stack, plansToReturn, connections.at(i), destination);
            }
        }
    }
}

/**
 * finds the possible flight paths from the origin to the final destination
 */

DSVector<FlightPlan> findFlightPaths(FlightAdjacencyList &flights, const Flight &origin, const Flight &destination)
{
    DSVector<FlightPlan> plansToReturn;
    DSStack<Flight> stack;

    if(flights.findOrigin(origin) >= 0)
    {
        stack.push(origin);

        while(!stack.isEmpty()) //begins iterative backtracking for each flight
        {
            checkConnections(flights, stack, plansToReturn, origin, destination);
        }
    }

    return plansToReturn;
}

/**
 * Creates a new linked list of flight plans that contains the sorted plans
 * Compares the time or the cost as requested for each flight plan and then adds the largest value to the list
 * returns the sorted list
 */

DSVector<FlightPlan> sortFlightPlans(DSVector<FlightPlan> &plans, DSString &sortRequest)
{
    DSVector<FlightPlan> sortPlans;
    int numFlights = 0;

    if(plans.getSize() >= 3)
    {
        numFlights = 3;
    }
    else if(plans.getSize() < 3)
    {
        numFlights = plans.getSize();
    }

    for(int j = 0; j < numFlights; j++)
    {
        int indexOfGreatest = 0;
        if(sortRequest == "T" || sortRequest == "t")
        {
            for(int i = 0; i < plans.getSize(); i++)
            {
                if(plans.at(indexOfGreatest).compareTime(plans.at(i)))
                {
                    indexOfGreatest = i;
                }
                if(i == plans.getSize() - 1)
                {
                    sortPlans.push_back(plans.at(indexOfGreatest));
                    plans.remove(indexOfGreatest);
                }
            }
        }
        else if(sortRequest == "C" || sortRequest == "c")
        {
            for(int i = 0; i < plans.getSize(); i++)
            {
                if(plans.at(indexOfGreatest).comparePrice(plans.at(i)))
                {
                    indexOfGreatest = i;
                }
                if(i == plans.getSize() - 1)
                {
                    sortPlans.push_back(plans.at(indexOfGreatest));
                    plans.remove(indexOfGreatest);
                }
            }
        }
    }

    return sortPlans;
}

/**
 * runner function
 * creates the adjacency list then calls the function to fill it with direct flights
 * calls the function to find the possible flight paths for the requested plans
 * calls function to compute total time and cost including layovers
 * calls function to sort the flights
 * outputs the flight plans to FlightPlans.txt
 */

void planFlights(ifstream &data, ifstream &paths, ofstream &plans)
{
    FlightAdjacencyList flights;
    readIntoAdjList(data, flights);

    char buffer[100];
    paths.getline(buffer, 5);
    DSString numPlans = buffer;

    for(int i = 0; i < numPlans.dsstoi(); i++)
    {
        DSString line, word, sortRequest;
        Flight origin, destination;
        DSVector<FlightPlan> possiblePlans;
        paths.getline(buffer, 100);
        line = buffer;

        for(int j = 0; j < line.getLength(); j++)
        {
            word = getline(line, j, '|');

            origin = word;
            ++j;

            word = getline(line, j, '|');

            destination = word;
            ++j;

            sortRequest = getline(line, j, '|');
        }

        if(sortRequest == "T")
        {
            plans << "Flight " << i + 1 << ": " << origin.getDest() << ", "
                 << destination.getDest() << " (Time)" << endl;
        }
        else
        {
            plans << "Flight " << i + 1 << ": " << origin.getDest() << ", "
                 << destination.getDest() << " (Cost)" << endl;
        }

        possiblePlans = findFlightPaths(flights, origin, destination);

        for(int j = 0; j < possiblePlans.getSize(); j++)
        {
            possiblePlans[j].calculateTimeAndPrice();
        }

        possiblePlans = sortFlightPlans(possiblePlans, sortRequest);

        if(possiblePlans.getSize() > 0)
        {
            for(int j = 0; j < possiblePlans.getSize(); j++)
            {
                plans << possiblePlans.at(j);
            }
        }
        else
        {
            plans << "No flight plans available between these cities." << endl;
        }

        plans << endl;
    }
}

#endif //INC_20F_FLT_PLN_FLIGHTPLANNER_H
