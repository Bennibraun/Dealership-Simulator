/* Benjamin Braun
 * CpSc 1070 - Section 2
 * Fall 2018
 *
 * Dealership.cpp
 * -Initialize instances of Dealership
 * -Maintain inventory of vehicles as a vector
 * -Add vehicles to this inventory
 * -Print the inventory by calling each vehicle's print function
 *
 */


#include "dealership.h"

// default constructor for Dealership
// uses an intialization list to set the
// default value for inventoryCount
Dealership::Dealership() : inventoryCount(0) {}

// parameterized constructor for Dealership
// initializes an instance of Dealership
// uses an initialization list to set the
// Dealership's specific values
Dealership::Dealership(string id) : id(id), inventoryCount(0) {}

// Dealership destructor, left intentionally blank
Dealership::~Dealership() {}

// returns the Dealership's ID
string Dealership::getID() {
  return id;
}

// sets the Dealership's ID to id
void Dealership::setID(string id) {
  Dealership::id = id;
}

// iterates through the vector of Vehicle ptrs
// calls each Vehicle's print function
void Dealership::printInventory() {
  for(iter = inventory.begin(); iter != inventory.end(); iter++) {
		(*iter)->printInfo();
	}
}

// returns the number of Vehicles in the Dealership's inventory
int Dealership::getInventoryCount() {
  return inventoryCount;
}

// adds a given Vehicle to the Dealership's inventory
// increments inventoryCount
void Dealership::addVehicle(Vehicle *v) {
  // adds a vehicle to the inventory and increments inventoryCount
	inventoryCount++;
	inventory.push_back(v);
}
