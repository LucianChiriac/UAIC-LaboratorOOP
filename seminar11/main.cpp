#include <iostream>
#include "array.h"
using namespace std;

int main()
{
    Array<int> v = {100};
    cout << v.GetCapacity() << '\n';
    v+=100;
    v+=214;
    v+=155;
    v+=423;
    v+=389;

    cout << '\n';
    return 0;
}