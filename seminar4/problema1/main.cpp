#include <iostream>
#include "Sort.h"
using namespace std;

int main()
{
    // char test[] = "102,3254,2,313,53,232,129";
    // Sort s(test);
    Sort s {6,756,3,346,435,235,856};
    s.Print();
    cout << endl;
    s.InsertSort(true);
    s.Print();
    cout << '\n';
    return 0;
}