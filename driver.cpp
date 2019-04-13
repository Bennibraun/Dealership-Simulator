/* Benjamin Braun
 * CpSc 1070 - Section 2
 * Fall 2018
 *
 * Driver.cpp
 * -calls constructors for Dealership and Vehicle
 * -opens the file specified by a command line argument
 * -reads the type of Vehicle from the file (car or truck)
 * -calls the constructor for car/truck, passing in a ptr to the file
 * -adds the newly constructed car/truck to the Dealership's inventory
 * -repeat until the end of the file is reached
 * -prints the number of Vehicles in the inventory
 * -calls the dealer's print function, print each Vehicle's info
 *
 */


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "vehicle.h"
#include "car.h"
#include "truck.h"
#include "dealership.h"

using namespace std;

// returns 0
// parameters are command line arguments
int main(int argc, char *argv[]) {

	// instantiate a Dealership object
	Dealership dealer("Clemson Auto Sales");

	// declare the Vehicle
	Vehicle *v;

  string type;

	//declare input file
	ifstream infile;

   // dealer.txt is passed in here via command-line arg
	infile.open(argv[1]);

	// read in type of vehicle
	infile >> type;

   // compares the type read in to determine what type of variable to create.
  while(!infile.eof()) {

    if(type == "car") {
			// declares the Vehicle as a Car
      v = new Car(infile);
			// adds the Vehicle to the Dealership's inventory
      dealer.addVehicle(v);
    }
    else if(type == "truck") {
			// declares the Vehicle as a Truck
      v = new Truck(infile);
			// adds the Vehicle to the Dealership's inventory
			dealer.addVehicle(v);
    }
    else {
			// catch error if type wasn't "car" or "truck"
      cout << "\nerror\n\n";
      exit(1);
    }

		infile >> type;

  }


  cout << "inventory count = " << dealer.getInventoryCount() << endl
        << endl;

	// has the Dealership print each vehicle's info
  dealer.printInventory();

  return 0;
}
