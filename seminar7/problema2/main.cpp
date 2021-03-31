#include <iostream>
#include "vector.cpp"
using namespace std;


int main()
{
    Vector<int> v;
    cout << v.getSize();
    v.Push(100);
    v.Push(20);
    v.Push(40);
    cout << v.Pop() << endl;

    cout << '\n';
    return 0;
}