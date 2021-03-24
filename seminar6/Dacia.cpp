#include "Dacia.h"

Dacia::Dacia()
{
    this->name = new char[10];
    strcpy(this->name, "Dacia");
    this->fuel_capacity = 100;
    this->fuel_consumption = 7;
}
char* Dacia::getName()
{
    return this->name;
}
float Dacia::getFuelCapacity()
{
    return this->fuel_capacity;
}
float Dacia::getFuelConsumption()
{
    return this->fuel_consumption;
}
float Dacia::getAverageSpeed()
{
    return Car::getAverageSpeed();
}