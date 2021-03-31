#include <iostream>
#include "vector.h"
#include "Masini.h"
using namespace std;

bool cmp(int a1, int a2)
{
    return a1<a2;
}

int main()
{
    Masini Ford = {50,100};
    Masini Mercedes = {50,350};
    Masini Mazda = {30,200};
    Masini Toyota = {20,50};
    Vector<Masini> v;
    v.push(Ford);
    v.push(Mercedes);
    v.push(Toyota);
    cout << v.pop().getRezervor();
    Masini copyMercedes = {50,350};
    // Vector<int> v;
    // v.push(100);
    // v.push(20);
    // v.push(40);
    // cout << v.pop() << endl;
    // cout << v.get(20) << endl;
    // v.insert(0,69);
    // v.sort();
    cout << '\n';
    return 0;
}