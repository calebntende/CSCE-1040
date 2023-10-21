#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>
#include <string>
#include <sstream>
#include "Driver.h"
#include "Drivers.h"
#include "Passenger.h"
#include "Passengers.h"
#include "Ride.h"
#include "Rides.h"  
#include "functions.h" 

using namespace std;




istream& operator>>(istream& is, const Driver& driver) {
    
    return is;
}

ostream& operator<<(ostream& os, const Driver& driver) {
    
    os << driver.get_name() << " " << driver.get_rating() << driver;
    return os;
}



int main() {


    cout<< " CSCE 1040.002\n";
    cout <<" Caleb Ntende\n";
    cout <<" CalebNtende@my.unt.edu\n";
    cout <<" this program books rides and assigns drivers to passengers\n";





    vector<Driver>drivers;
    Drivers Drivers;
    vector<Passenger>passengers;
    Passengers Passengers;
    vector<Ride>rides;
    Rides Rides;


    int choice;
    print_menu();
    do
    {
        cout <<" enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        do{
            driver_menu();
            cin >> choice;
            switch(choice)
            {
                case 1:
                cout <<"test1"<<endl;
                Drivers.add_driver(drivers); 
                break;
                case 2:
                cout <<"test2";
                cout<<endl;
                break;
                case 3:
                cout <<"test3";
                cout<<endl;
                break;
                case 4:
                cout <<"test4";
                cout<<endl;
                break;
                case 5:
                cout <<"test5";
                cout<<endl;
                break;
                case 6:
                cout <<"test6";
                cout<<endl;
                break;
                default:
                break;
            }
        }while(choice!=6);
        cout <<"test1";
        cout<<endl;

            break;
        case 2:
         do{
            
            cin >> choice;
            switch(choice)
            {
                case 1:
                cout <<"test1"<<endl;
                
                break;
                case 2:
                cout <<"test2";
                cout<<endl;
                break;
                case 3:
                cout <<"test3";
                cout<<endl;
                break;
                case 4:
                cout <<"test4";
                cout<<endl;
                break;
                case 5:
                cout <<"test5";
                cout<<endl;
                break;
                case 6:
                cout <<"test6";
                cout<<endl;
                break;
                default:
                break;
            }

        }while(choice!=6);


        cout<<"test2";
            cout <<endl;
                break;
        case 3:
        do{
            
            cin >> choice;
            switch(choice)
            {
                case 1:
                cout <<"test1"<<endl;
                
                break;
                case 2:
                cout <<"test2";
                cout<<endl;
                break;
                case 3:
                cout <<"test3";
                cout<<endl;
                break;
                case 4:
                cout <<"test4";
                cout<<endl;
                break;
                case 5:
                cout <<"test5";
                cout<<endl;
                break;
                case 6:
                cout <<"test6";
                cout<<endl;
                break;
                default:
                break;
            }

        }while(choice!=6);
        cout <<"test3";
        cout<<endl;

            break;
        
        default:
            break;
        }
        print_menu();
        
    } while (choice != 4);

    ifstream driver_file("drivers.txt");
if (driver_file.is_open()) {
    Driver driver;
    while (driver_file >> driver) {
        drivers.push_back(driver);
    }
    driver_file.close();
} else {
    cout << "Unable to open file" << endl;
}


 
    return 0;
}
    
    