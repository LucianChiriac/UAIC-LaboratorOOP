#include <iostream>
#include <algorithm>
#include "Car.h"


class Circuit{
private: 
    int length;
    Weather weather;
    Car* cars;
public:
    void SetLength(int);
    void SetWeather(Weather);
    void AddCar(Car*);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinis();

};