/* Benjamin Braun
 * CpSc 1070 - Section 2
 * Fall 2018
 *
 * vehicle.cpp
 * -Initialize instances of Vehicle
 * -Prints Vehicle info, such as make, model, and color
 * -Reads Vehicle info from a given file
 *
 */


#include "vehicle.h"
#include <iostream>
#include <fstream>
using namespace std;

// default constructor
// uses an initialization list to set default member values
Vehicle::Vehicle() : id("c12345"), year(1990), make("Toyota"),
										model("Corolla"), color("red") {}


// parameterized constructor
// initializes an instance of Vehicle
// uses an initialization list to set the member values
Vehicle::Vehicle(string id, int year, string make, string model,
						string color) : id(id), year(year), make(make),
						model(model), color(color) {}

// prints formatted info specific to the Vehicle class
void Vehicle::printInfo() {
	cout <<"id:\t"<<id<<endl;
	cout <<"year:\t"<<year<<endl;
	cout <<"make:\t"<<make<<endl;
	cout <<"model:\t"<<model<<endl;
	cout <<"color:\t"<<color<<endl;
}

// Vehicle destructor, left intentionally blank
Vehicle::~Vehicle() {}

// takes an input file as a parameter
// reads in info specific to the Vehicles
// sets info from the file to the Vehicle's member variables
void Vehicle::readInfo(ifstream &inFile) {
	inFile >> id >> year >> make >> model >> color;
}

// returns the Vehicle's ID
string Vehicle::getID() {
  return id;
}

// sets the Vehicle's ID to id
void Vehicle::setID(string id) {
  Vehicle::id = id;
}
