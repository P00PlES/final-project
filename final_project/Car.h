#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
 private:
 protected:
 public:
  bool isDanger;
  
  void turnOntoRoad(Road);
  void inDanger();
  void outOfDanger();
  void sendSignal(Motorcycle);

  Car(Road);

  virtual Json::Value dump2JSON();
};

#endif