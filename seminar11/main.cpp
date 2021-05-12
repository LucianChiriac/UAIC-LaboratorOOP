#include <iostream>
#include "array.h"
using namespace std;

int main()
{
    Array<int> v = {5};
    //get the capacity
    try{
        v+=10;
        v+=25;
        v+=30;
        v+=40;
        v+=64;
        v+=978;
        v+=94;
        cout << "Foreach print: ";
        for(auto key: v)
        {
            cout << *key << ' ';
        }
        cout << endl;
        cout << "Al 5lea element este: " << v[4] << '\n';
        cout << "Modific al 5lea element: ";
        v.Insert(4,321);
        v.Print();
        cout << "Sterg al 5lea element: ";
        v.Delete(4);
        v.Print();
        cout << "Vectorul sortat este: ";
        v.Sort();
        v.Print();
        cout << "Elementul 94 se afla pe pozitia: ";
        v.BinarySearch(94);
        cout << "Find doar daca b=a+10: ";
        v.Find(10, [](const int& _a,const int& _b) -> int{
            if(_a+10==_b)
                return 1;
            return 0;
        });
    }catch(Exception e)
    {
        cout << "\n[Error] " << e.GetMsg() <<'\n';
    }

    return 0;
}