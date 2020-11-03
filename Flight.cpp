//
// Created by Sammy Timmins on 10/21/20.
//

#include "Flight.h"

Flight::Flight()
{
    time = 0;
    price = 0.00;
    destination = "";
    airline = "";
}

Flight::Flight(const DSString &destination)
{
    this->destination = destination;
    price = 0.00;
    time = 0;
    airline = "";
}

Flight::Flight(const DSString &destination, const float price, const int time, const DSString &airline)
{
    this->destination = destination;
    this->price = price;
    this->time = time;
    this->airline = airline;
}

Flight::Flight(const Flight &copy)
{
    destination = copy.destination;
    price = copy.price;
    time = copy.time;
    airline = copy.airline;
}

Flight &Flight::operator=(const Flight &copy)
{
    destination = copy.destination;
    price = copy.price;
    time = copy.time;
    airline = copy.airline;
    return *this;
}

Flight &Flight::operator=(const DSString &location)
{
    destination = location;
    price = 0.00;
    time = 0;
    airline = "";

    return *this;
}

/**
 * compares the destination members of two flights and returns if they are equivalent
 */
bool Flight::operator==(const Flight &toCompare)
{ //all members of the object must be equivalent
    return destination == toCompare.destination;
}

int Flight::getTime() const {
    return time;
}

float Flight::getPrice() const {
    return price;
}

const DSString & Flight::getDest() const {
    return destination;
}

const DSString & Flight::getAirline() const {
    return airline;
}

void Flight::setTime(const int time)
{
    this->time = time;
}

void Flight::setPrice(const float price)
{
    this->price = price;
}

void Flight::setDestination(const DSString &destination)
{
    this->destination = destination;
}

void Flight::setAirline(const DSString &airline)
{
    this->airline = airline;
}

void Flight::setAllZero() //set everything to zero or empty except destination
{
    price = 0.00;
    time = 0;
    airline = "";
}

void Flight::setAll(const float price, const int time, const DSString &airline) //set all values except the destination
{
    this->price = price;
    this->time = time;
    this->airline = airline;
}

bool Flight::checkAllMembers(const Flight &toCheck) {
    return (destination == toCheck.destination) && (price == toCheck.price) &&
            (time == toCheck.time) && (airline == toCheck.airline);
}






