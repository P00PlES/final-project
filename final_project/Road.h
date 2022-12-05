#ifndef ROAD_H
#define ROAD_H

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

class Road {
 private:
 protected:
 public:
  
  bool isSafeFront;
  bool isSafeBehind;

  Road();
  Road(bool, bool);
  bool getSafeFront();
  bool getSafeBehind();

  virtual Json::Value dump2JSON();
};

#endif