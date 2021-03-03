#include <iostream>
#include "Math.h"
using namespace std;

int main()
{
    cout << Math::Add(10,20) << '\n';
    cout << Math::Add(10,20,30) << '\n';
    cout << Math::Add(1.20, 2.80) << '\n';
    cout << Math::Add(5.4,3.6,8.0) << '\n';
    cout << Math::Mul(10,20) << '\n';
    cout << Math::Mul(10,20,30) << '\n';
    cout << Math::Mul(1.2,2.0) << '\n';
    cout << Math::Mul(1.2,2.0,5.3) << '\n';
    cout << Math::Add(6,1,2,3,4,5,30);

    //linux debug
    cout << '\n';
    return 0;
}