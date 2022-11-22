//lab 5_prob 5.4

#include <iostream>
#include <list>
#include <string>
using namespace std;

class Location {
public:
	list<Mosquito> mosquitos;
	void addMosquito(Mosquito mosquito) {};
	void removeMosquito(Mosquito mosquito) {};
	void moveMosquito(Mosquito mosquito, Location newlocation) {
		//this->removeMosquito(mosquito)
		//newlocation->addMosquito(mosquito)
	}
	void searchMosquito(Mosquito mosquito) {
		// iterate list of mosquitos and find/return/display the specific mosquito
	}
};

class Address {
public:
	string streetName;
	int streetNo;
	Apartment apartment;
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
};

class Commuter : public Person {
public:
	Address workAddress;
};

class Apartment : public Location {
public:
	string building;
	int apartmentNo;
	Person owner;
	void changeOwner(Person newOwner) {
		/*
		this->owner =newOwner;
		*/
	};
};

class Student : public Commuter {
public:
	string facultyName;
	void learn() {};
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

class BusStation {
public:
	Address busStationAddress;
	int busStationNo;
	list<Bus> busesStopping;
	list<Bus> busesInStation;
	list<Commuter> commutersWaiting;
	void getCommutersNo() {
		//sum of 
		//- count list of commutersWaiting
		//- sum of list of buses->getCommutersNo()
	};
	void getBusStopping() {
		/*
	     display list of busesStopping
		*/
	}
	void addCommuter(Person person) {
		//add a student or person in the list of commutersWaiting  
	};
};

class Vehicle : public Location {
public:
	Driver driver;
protected:
	Engine engine;
	void start() {};
	void addPasseger(Commuter commuter) {};  //here we also add the student to a bus and a car
	void removePassenger(Commuter commuter) {};
};

class Bus : public Vehicle {
public:
	int sittingCapacity;
	int standingCapacity;
	int busNumber;
	list<Commuter> commuters;
	list<BusStation> busStations;
	void takeCommuters() {};
	void dislayRoute() {};
	void getCommutersNo() {
		//count list of comutersWaiting
	};
	void stationsToStopIn() {
		/*
		'return' list of busStations 
		*/
	}
};

class Car : public Vehicle {
public:
	int capacity;
	list<Driver> drivers;
	void openTrunk() {};
	void laneAssist() {};
};

int main()
{

}
