/* Benjamin Braun
 * CpSc 1070 - Section 2
 * Fall 2018
 * dealership.h
 */


#ifndef DEALERSHIP_H
#define DEALERSHIP_H

#include <vector>
#include <string>
#include "vehicle.h"

using namespace std;

class Dealership {
  public:
    Dealership();
    Dealership(string id);
    virtual ~Dealership();

    string getID();
    void setID(string id);

    virtual void printInventory();
    int getInventoryCount();
    void addVehicle(Vehicle *v);

 private:
   string id;
	 int inventoryCount;
   //list<Vehicle *> inventory;
   vector<Vehicle *> inventory;
   //list<Vehicle *>::iterator iter;
   vector<Vehicle *>::iterator iter;
};

#endif /* DEALERSHIP_H */
