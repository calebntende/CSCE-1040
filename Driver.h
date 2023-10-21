#ifndef DRIVER_H
#define DRIVER_H
#include <string>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Driver
{
    public:
    Driver();
    Driver(int id, string name, int capacity, bool handicapped, string type, float rating, bool available, bool pets, string notes);
    void set_id(int id);
    int get_id()const;
    void set_name(string name);
    string get_name()const;
    void set_capacity(int capacity);
    int get_capacity();
    void set_handicapped(bool handicapped);
    bool get_handicapped();
    void set_type(string type);
    string get_type();
    void set_rating(float rating);
    float get_rating()const;
    void set_availability(bool available);
    bool get_availability()const;
    void set_pets(bool pets);
    bool get_pets()const;
    void set_notes(string notes);
    string get_notes();

private:

int Driver_id;
string Driver_name;
int Driver_capacity;
bool Driver_handicapped;
string Driver_type;
float Driver_rating;
bool Driver_availability;
bool Driver_pets;
string Driver_notes;

};







#endif