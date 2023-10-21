#include "functions.h"
#include <iostream>
using namespace std;

void print_menu()
{
    cout  << "1.Access Drivers" << endl;
    cout << "2. Access Passengers" << endl;
    cout << "3. Access Rides" << endl;
    cout << "4. Exit" << endl;

}

void driver_menu()
{
    cout <<"1. Add driver\n";
    cout <<"2. Edit driver\n";
    cout <<"3. Delete driver\n";
    cout <<"4. search driver\n";
    cout <<"5. Print driver\n";
    cout <<"6. Exit\n";
    cout <<"Enter your choice: ";
}

void passenger_menu()
{
    cout <<"1. Add passenger\n";
    cout <<"2. Edit passenger\n";
    cout <<"3. Delete passenger\n";
    cout <<"4. search passenger\n";
    cout <<"5. Print passenger\n";
    cout <<"6. Exit\n";
    cout <<"Enter your choice: ";
}

void ride_menu()
{
    cout <<"1. Add ride\n";
    cout <<"2. Edit ride\n";
    cout <<"3. Delete ride\n";
    cout <<"4. search ride\n";
    cout <<"5. print list of rides for a parituclar passenger\n";
    cout <<"6. print list of rides for a parituclar driver\n";
    cout <<"7. print a list of all active (future and current) rides, all completed rides and all cancelled rides\n";
}