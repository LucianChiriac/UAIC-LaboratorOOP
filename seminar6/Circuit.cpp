#include "Circuit.h"
using namespace std;

void Circuit::SetLength(int len)
{
    this->length = len;
}
void Circuit::SetWeather(Weather type)
{
    this->weather = type;
}
void Circuit::AddCar(Car* vrum)
{
    cout << vrum << '\n';
}
void Circuit::Race()
{
    cout << "race";
}
void Circuit::ShowFinalRanks()
{
    cout << "race";
}
void Circuit::ShowWhoDidNotFinis()
{
    cout << "race";
}