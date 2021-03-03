#include <iostream>
#include "Canvas.h"
using namespace std;

int main()
{
    Canvas c = {10,20};
    
    // c.DrawLine();
    c.SetPoint(4,5, 'x');
    c.Clear();
    c.DrawLine(1,1,3,3,'y');
    c.Print();
    
    // c.Clear();
    return 0;
}