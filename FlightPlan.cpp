//
// Created by Sammy Timmins on 10/26/20.
//

#include <iomanip>
#include "FlightPlan.h"

FlightPlan::FlightPlan()
{
    totalPrice = 0.00;
    totalTime = 0;
}

FlightPlan::FlightPlan(const FlightPlan &copy)
{
    totalPrice = copy.totalPrice;
    totalTime = copy.totalTime;
    flights = copy.flights;
}

FlightPlan &FlightPlan::operator=(const FlightPlan &copy)
{
    totalPrice = copy.totalPrice;
    totalTime = copy.totalTime;
    flights = copy.flights;

    return *this;
}

ostream &operator<<(ostream &os, FlightPlan &plan) {
    for(int i = 0; i < plan.flights.getSize() - 1; i++)
    {
        os << plan.flights.at(i).getDest() << " -> ";
    }

    os << fixed << setprecision(2) << plan.flights.at(plan.flights.getSize() - 1).getDest() << ". Time: "
         << plan.totalTime << " Cost: $" << plan.totalPrice << endl;

    return os;
}

/**
 * sets the flight plan
 */
void FlightPlan::addPlan(const DSLinkedList<Flight> plan)
{
    for(int i = 0; i < plan.getSize(); i++)
    {
        flights.add(plan.at(i));
    }
}

void FlightPlan::calculateTimeAndPrice()
{
    for(int i = 0; i < flights.getSize(); i++)
    {
        totalPrice += flights.at(i).getPrice();
        totalTime += flights.at(i).getTime();
    }

    totalTime += (flights.getSize() - 2) * 43;
    totalPrice += (flights.getSize() - 2) * 19.00;
}

bool FlightPlan::comparePrice(const FlightPlan &f2) {
    return totalPrice > f2.totalPrice;
}

bool FlightPlan::compareTime(const FlightPlan &f2)
{
    return totalTime > f2.totalTime;
}
