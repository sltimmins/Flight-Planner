//
// Created by Sammy Timmins on 10/26/20.
//

#ifndef INC_20F_FLT_PLN_FLIGHTPLAN_H
#define INC_20F_FLT_PLN_FLIGHTPLAN_H

#include "DSStack.h"
#include "Flight.h"

class FlightPlan
{
private:
    float totalPrice = 0.00;
    int totalTime = 0;
    DSLinkedList<Flight> flights;

public:
    FlightPlan();
    ~FlightPlan() = default;
    FlightPlan(const FlightPlan &copy);
    FlightPlan& operator=(const FlightPlan &copy);
    friend ostream& operator<<(ostream &os, FlightPlan &plan);
    void addPlan(const DSLinkedList<Flight> plan);
    void calculateTimeAndPrice();
    bool comparePrice(const FlightPlan &f2);
    bool compareTime(const FlightPlan &f2);
};

#endif //INC_20F_FLT_PLN_FLIGHTPLAN_H
