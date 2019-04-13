/* Benjamin Braun
 * CpSc 1070 - Section 2
 * Fall 2018
 * car.h
 */


#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle {
  public:
   Car();
   Car(ifstream &inFile);
   Car(string id, int year, string make, string model,
       string color, int numberOfDoors);
   ~Car();
   int getDoors();
   void setDoors(int numdoors);
   void printInfo();

 private:
   int doors;
};

#endif /* CAR_H */
