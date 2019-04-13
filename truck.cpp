/* Benjamin Braun
 * CpSc 1070 - Section 2
 * Fall 2018
 *
 * truck.cpp
 * -Initialize instances of truck, a class derived from Vehicle
 * -Read info from a given file
 * -Print said info, calling Vehicle's print for the general info
 *
 */


#include "truck.h"
#include <iostream>

// default constructor for Truck
// uses an initialization list to set default values for the Truck
Truck::Truck() : axles(4), weight(5000) {}

// parameterized constructor
// initializes an instance of Truck
// uses an initialization list to set the Truck's specific values
// sets all member variables to the given parameters
Truck::Truck(string id, int year, string make, string model, string color,
            int axles, double grossWt) : axles(axles), weight(grossWt) {

	this->id = id;
	this->year = year;
	this->make = make;
	this->model = model;
	this->color = color;
}

// parameterized constructor
// takes an input file to read from
// sends file ptr to Vehicle readInfo() to read in the Vehicles info
// then reads in the info specific to the truck (axles and weight)
Truck::Truck(ifstream &inFile) {
	readInfo(inFile);
  inFile >> axles >> weight;
}

// Truck destructor, left intentionally blank
Truck::~Truck() {}

// prints the info that was previously read from the input file
// first calls Vehicle's print function for vehicle info
// then prints the Truck's weight
void Truck::printInfo() {
	Vehicle::printInfo();
	cout <<"weight: "<<weight<<"\n"<<endl;
}

// returns the number of axles on the Truck
int Truck::getAxles() {
  return axles;
}

// returns the weight of the Truck
double Truck::getWeight() {
  return weight;
}

// sets the number of axles on the Truck to ax
void Truck::setAxles(int ax) {
  axles = ax;
}

// sets the weight of the Truck to wt
void Truck::setWeight(double wt) {
  weight = wt;
}
