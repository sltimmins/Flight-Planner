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
    os << plan.flights.at(0).getDest() << " -> ";

    for(int i = 1; i < plan.flights.getSize() - 1; i++)
    {
        os << plan.flights.at(i).getDest() << " (" << plan.flights.at(i).getAirline()
           << ")" << " -> ";
    }

    os << fixed << setprecision(2) << plan.flights.at(plan.flights.getSize() - 1).getDest()
       << " (" << plan.flights.at(plan.flights.getSize() - 1).getAirline() << ")"
       << ". Time: " << plan.totalTime << " Cost: $" << plan.totalPrice << endl;

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

/**
 * calculates the time and price of the flight plan including layovers
 */

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

/**
 * returns if the this member's price is greater than the parameter's price
 */

bool FlightPlan::comparePrice(const FlightPlan &f2) {
    return totalPrice > f2.totalPrice;
}

/**
 * returns if the this member's time is greater than the parameter's time
 */

bool FlightPlan::compareTime(const FlightPlan &f2)
{
    return totalTime > f2.totalTime;
}
