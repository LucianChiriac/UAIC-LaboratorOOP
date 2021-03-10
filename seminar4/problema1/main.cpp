#include <iostream>
#include "Sort.h"
using namespace std;

int main()
{
    char test[] = "10,11,12,13,15";
    Sort s(test);
    // Sort s {6,3,235,346,435,756,856};
    s.Print();
    cout << '\n';
    return 0;
}