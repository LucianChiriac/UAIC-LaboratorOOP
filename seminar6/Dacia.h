#pragma once
#include "Car.h"

class Dacia : Car {
    protected:
        char* name;
        int fuel_capacity;
        int fuel_consumption;
        Weather avg_speed;
    public:
        Dacia();
        char* getName();
        float getFuelCapacity();
        float getFuelConsumption();
        float getAverageSpeed();
};