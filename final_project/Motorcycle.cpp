#include "Motorcycle.h"

  Motorcycle::Motorcycle(Road arg_road) {
    this->currentRoad = arg_road;
  }
  void Motorcycle::slowDown() {
    this->isSlowedDown = true;
  }
  void Motorcycle::speedUp() {
    this->isSpedUp = true;
  }
  bool Motorcycle::checkFront(Road arg_road) {
    return arg_road.getSafeFront();
  }
  bool Motorcycle::checkBack(Road arg_road) {
    return arg_road.getSafeBehind();
  }
  void Motorcycle::sendSignal(Car arg_car) {
    arg_car.turnOntoRoad(this->currentRoad);
    arg_car.outOfDanger();
  }
  void Motorcycle::startChecks() {
    shouldCheck = true;
  }