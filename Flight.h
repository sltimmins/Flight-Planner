//
// Created by Sammy Timmins on 10/21/20.
//

#ifndef INC_20F_FLT_PLN_FLIGHT_H
#define INC_20F_FLT_PLN_FLIGHT_H

#include "DSString.h"

class Flight
{
public:
    Flight();
    Flight(const DSString &destination);
    Flight(const DSString &destination, const float price, const int time, const DSString &airline);
    ~Flight() = default;
    Flight(const Flight &copy);
    Flight& operator=(const Flight &copy);
    Flight& operator=(const DSString &location);
    bool operator==(const Flight &toCompare);
    int getTime() const;
    float getPrice() const;
    const DSString & getDest() const;
    const DSString & getAirline() const;
    void setTime(const int time);
    void setPrice(const float price);
    void setDestination(const DSString &destination);
    void setAirline(const DSString &airline);
    void setAllZero();
    void setAll(const float price, const int time, const DSString &airline);
    bool checkAllMembers(const Flight &toCheck);

private:
    int time;
    float price;
    DSString destination, airline;
};

#endif //INC_20F_FLT_PLN_FLIGHT_H