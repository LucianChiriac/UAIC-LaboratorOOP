#pragma once
#include <cstring>
#include "Weather.h"

class Car{

protected:
    char* name;
    int fuel_capacity;
    int fuel_consumption;
    Weather avg_speed;

public: 
    virtual char* getName() = 0;
    virtual float getFuelCapacity() = 0;
    virtual float getFuelConsumption() = 0;
    virtual float getAverageSpeed() = 0;
};