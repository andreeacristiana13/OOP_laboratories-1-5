// lab4 4.7.cpp 

#include <iostream>
#include <list>
using namespace std;

class Address {
public:
	string streetName;
	int streetNo;
	string building;
	int apartmentNo;
	void displayAddress() {};
};

class Person {
public:
	string name;
	int age;
	void walk() {};
protected:
	long cnp;
	Address homeAddress;
};

class Driver : public Person {
public:
	string driverLicence;
	void drive(Car* car) {};
};

class Commuter : public Person {
public:
	Address workAddress;
	Vehicle vehicle;
	void takeVehicle(Vehicle vehicle) {};
};

class Mosquito {
public:
	int size;
	string speciesName;
	void bite(Person person) {};
};

class Engine {
public:
	string brandName;
	int capacity;  //capacitate cilindrica
	void start() {};
	void stop() {};
};

class Vehicle {
public:
	Driver driver;
protected:
	Engine engine;
};

class Bus : public Vehicle {
public:
	int sittingCapacity;
	int standingCapacity;
	list<Commuter> commuters;  
	list<BusStation> busStations;
	void takeCommuters() {};
	void dislayRoute() {};

};

class Car : public Vehicle {
public:
	int capacity;
	list<Driver> drivers;
	void openTrunk() {};
	void laneAssist() {};
};

class BusStation {
public:
	Address busStationAddress;
	int busStationNo;
};

int main()
{

}

