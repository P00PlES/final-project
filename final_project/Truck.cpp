#include "Truck.h"

Truck::Truck(Road arg_road) {
    this->currentRoad = arg_road;
}

void sendSinal (Car arg_car) {
    arg_car.inDanger();
}
//send danger signal to car behind in current road