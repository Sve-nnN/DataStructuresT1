#pragma once
#include <iostream>
using namespace std;
class Bus
{
private:
    int busNumber;
    string route;
    int capacity;
    string schedule;

public:
    Bus() {
		busNumber = 0;
		route = "";
		capacity = 0;
		schedule = "";
	}
    Bus(int busNumber, string route, int capacity, string schedule) {
        this->busNumber = busNumber;
        this->route = route;
        this->capacity = capacity;
        this->schedule = schedule;
    }

    // Getters
    int getBusNumber() const { return busNumber; }
    string getRoute() const { return route; }
    int getCapacity() const { return capacity; }
    string getSchedule() const { return schedule; }

    // Mostrar información del autobús
    void displayInfo() const {
        cout << "Bus Number: " << busNumber << endl;
        cout << "Route: " << route << endl;
        cout << "Capacity: " << capacity << endl;
        cout << "Schedule: " << schedule << endl;
    }
};

