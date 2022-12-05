#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H


#include "Vehicle.h"
#include "Road.h"

class Motorcycle : public Vehicle {
 private:
 protected:
 public:

    bool isSlowedDown = false;
    bool isSpedUp = false;
    bool shouldCheck = false;
  
  void speedUp();
  void slowDown();
  bool checkFront(Road);
  bool checkBack(Road);
  void sendSignal(Car);
  void startChecks();


  Motorcycle(Road);
  Motorcycle();

  virtual Json::Value dump2JSON();
};

#endif