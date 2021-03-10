#include <iostream>
#include "Sort.h"
using namespace std;

int main()
{
    char test[] = "102,3254,2,313,53,232,129";
    Sort s(test);
    // Sort s {6,3,235,346,435,756,856};
    s.Print();
    s.BubbleSort(true);
    s.Print();
    cout << '\n';
    return 0;
}