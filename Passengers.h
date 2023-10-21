#ifndef PASSENGERS_H
#define PASSENGERS_H
#include "Passenger.h"


#include <string>
#include <iostream>
using namespace std;

class Passengers
{
    public:
    
    void add_passenger(vector<Passenger>&passengers);
    void edit_passenger(vector<Passenger>&passengers,int passenger_id);
    void delete_passenger(vector<Passenger>&passengers,int passenger_id);
    bool search_passenger(vector<Passenger>&passengers,int passenger_id);
    void print_passenger();
    private:
    vector<Passenger>passengers;
};




#endif