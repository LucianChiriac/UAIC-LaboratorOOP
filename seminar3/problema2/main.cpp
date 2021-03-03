#include <iostream>
#include "Canvas.h"
using namespace std;

int main()
{
    Canvas c = {10,20};
    
    c.DrawLine();
    c.Print();
    
    
    // c.Clear();
    return 0;
}