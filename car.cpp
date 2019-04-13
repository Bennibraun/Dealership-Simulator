/* Benjamin Braun
 * CpSc 1070 - Section 2
 * Fall 2018
 *
 * car.cpp
 * -Initialize instances of car, a class derived from Vehicle
 * -Read info from a given file
 * -Print said info, calling Vehicle's print for the general info
 *
 */


#include "car.h"
#include <iostream>

// default constructor for Car
// uses an initialization list to set the default value for the Car
Car::Car() : doors(2) {}

// parameterized constructor
// initializes an instance of Car
// uses an initialization list to set the Car's specific value
// sets all member variables to the given parameters
Car::Car(string id, int year, string make, string model, string color,
          int numberOfDoors) : doors(numberOfDoors) {

	this->id = id;
	this->year = year;
	this->make = make;
	this->model = model;
	this->color = color;

}

// parameterized constructor
// takes an input file to read from
// sends file ptr to Vehicle readInfo() to read in the Vehicles info
// then reads in the info specific to the car (doors)
Car::Car(ifstream &inFile) {
	readInfo(inFile);
  inFile >> doors;
}

// Car destructor, left intentionally blank
Car::~Car() {}

// prints the info that was previously read from the input file
// first calls Vehicle's print function for vehicle info
// then prints the Car's number of doors
void Car::printInfo() {
  Vehicle::printInfo();
  cout << "doors:\t" << doors << "\n" << endl;
}

// returns the number of doors on the Car
int Car::getDoors() {
  return doors;
}

// sets the number of doors on the Car to numdoors
void Car::setDoors(int numdoors) {
  doors = numdoors;
}
