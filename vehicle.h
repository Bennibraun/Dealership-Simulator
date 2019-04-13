/* Benjamin Braun
 * CpSc 1070 - Section 2
 * Fall 2018
 * vehicle.h
 */


#ifndef VEHICLE_H
#define VEHICLE_H

#include <fstream>
using namespace std;

class Vehicle {

  public:
   Vehicle();
   Vehicle(string id, int year, string make, string model, string color);
   virtual ~Vehicle();
	 void readInfo(ifstream &inFile);
   string getID();
   void setID(string id);
   virtual void printInfo();

	 string id;
   int year;
   string make;
   string model;
   string color;

};

#endif /* VEHICLE_H */
