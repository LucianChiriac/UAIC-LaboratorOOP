#include <iostream>
#include "Canvas.h"
using namespace std;

int main()
{
    Canvas c = {10,10};
    
    // c.DrawLine();
    c.SetPoint(4,5, 'x');
    c.Clear();
    c.DrawLine(1,1,3,3,'y');
    c.Clear();
    c.FillRect(1,1,4,5,'r');
    c.Clear();
    c.DrawRect(1,1,4,5,'l');
    c.Clear();
    c.DrawCircle(3,3,2,'a');
    c.Print();

    // c.Clear();
    return 0;
}