#include <iostream>
#include "vector.cpp"
using namespace std;


int main()
{
    Vector<int> v;
    v.push(100);
    v.push(20);
    v.push(40);
    v.remove(1);
    cout << v.pop() << endl;
    cout << v.get(20) << endl;
    cout << '\n';
    return 0;
}