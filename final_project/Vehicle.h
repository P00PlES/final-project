#ifndef VEHICLE_H
#define VEHICLE_H

#include "Road.h"
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <jsoncpp/json/json.h>
#include <jsoncpp/json/value.h>
#include <string.h>
#include "Car.h"
#include "Motorcycle.h"
#include "Truck.h"
#include "Road.h"

class Vehicle : public Road{
 private:
 protected:
 public:

 Road currentRoad;

 Vehicle();

 virtual Json::Value dump2JSON();
};

#endif