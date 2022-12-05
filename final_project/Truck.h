#ifndef TRUCK_H
#define TRUCK_H


#include "Vehicle.h"


class Truck : public Vehicle {
 private:
 protected:
 public:

  void sendSignal(Car);

  Truck(Road);

  virtual Json::Value dump2JSON();
};

#endif