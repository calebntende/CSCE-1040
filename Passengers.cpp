#include "Passenger.h"
#include "Passengers.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

void Passengers::add_passenger(vector<Passenger>&passengers)
{
    string name;
    int passengerid;
    string payment,passenger_hanicapped,passenger_pets;
    bool handicapped;
    float rating;
    bool pets;
    cin.ignore();
    cout << "Enter passenger name: ";
    getline(cin,name);
    cout << "id is given: ";
    static int id=100000;
    passengerid=id;
    id++;
    
    cout << "Enter passenger payment: ";
    cin >> payment;
    cin.ignore();
    cout << "Enter passenger handicapped: ";
    cin >> passenger_hanicapped;

    if(passenger_hanicapped=="yes")
    {
        handicapped=true;
    }
    else
    {
        handicapped=false;
    }
    cin.ignore();
    cout << "Enter passenger rating: ";
    cin >> rating;
    cin.ignore();   
    cout << "Enter passenger pets: ";
    cin >> passenger_pets;
    if(passenger_pets=="yes")
    {
        pets=true;
    }
    else
    {
        pets=false;
    }
    cin.ignore();
    Passenger passenger(name,id,payment,handicapped,rating,pets);
    passengers.push_back(passenger);
}

bool Passengers::search_passenger(vector<Passenger>&passengers,int passenger_id)
{
    for(int i=0;i<passengers.size();i++)
    {
        if(passengers[i].get_Passenger_id()==passenger_id)
        {
            return true;
        }
    }
    return false;
}

void Passengers::edit_passenger(vector<Passenger>&passengers,int passenger_id)
{
    string name;
    int passengerid;
    string payment,passenger_hanicapped,passenger_pets;
    bool handicapped;
    float rating;
    bool pets;
    if(search_passenger(passengers,passenger_id))
    {
        for(int i=0;i<passengers.size();i++)
        {
            if(passengers[i].get_Passenger_id()==passenger_id)
            {
                cin.ignore();
                cout << "Enter passenger name: ";
                getline(cin,name);
                cout << "Enter passenger payment:(cash,credit,debit) ";
                cin >> payment;
                cout << "Enter passenger handicapped: ";
                cin >> passenger_hanicapped;
                if(passenger_hanicapped=="yes")
                {
                    handicapped=true;
                }
                else
                {
                    handicapped=false;
                }
                cout << "Enter passenger rating: ";
                cin >> rating;
                cin.ignore();
                cout << "Enter passenger pets: ";
                cin >> passenger_pets;
                if(passenger_pets=="yes")
                {
                    pets=true;
                }
                else
                {
                    pets=false;
                }
                cin.ignore();
                Passenger passenger(name,passenger_id,payment,handicapped,rating,pets);
                passengers[i]=passenger;
            }
        }
    }
    else
    {
        cout << "Passenger not found\n";
    }
}

void Passengers::delete_passenger(vector<Passenger>&passengers,int passenger_id)
{
    if(search_passenger(passengers,passenger_id))
    {
        for(int i=0;i<passengers.size();i++)
        {
            if(passengers[i].get_Passenger_id()==passenger_id)
            {
                passengers.erase(passengers.begin()+i);
                cout << "Passenger deleted\n";
                break;
            }
        }
    }
    else
    {
        cout << "Passenger not found\n";
    }
}

void Passengers::print_passenger()
{
    for(int i=0;i<passengers.size();i++)
    {
        cout << "Passenger name: " << passengers[i].get_Passenger_name() << endl;
        cout << "Passenger id: " << passengers[i].get_Passenger_id() << endl;
        cout << "Passenger payment: " << passengers[i].get_Passenger_payment() << endl;
      //  cout << "Passenger handicapped: " << passengers[i].get_Passenger_handicapped() << endl;
        cout << "Passenger rating: " << passengers[i].get_Passenger_rating() << endl;
       // cout << "Passenger pets: " << passengers[i].get_Passenger_pets() << endl;
    }
}