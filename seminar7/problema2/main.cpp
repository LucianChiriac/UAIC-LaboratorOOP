#include <iostream>
#include "vector.h"
using namespace std;

bool cmp(int a1, int a2)
{
    return a1<a2;
}

int main()
{
    Vector<int> v;
    v.push(100);
    v.push(20);
    v.push(40);
    cout << v.pop() << endl;
    cout << v.get(20) << endl;
    v.insert(0,69);
    v.sort();
    cout << '\n';
    return 0;
}