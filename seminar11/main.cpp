#include <iostream>
#include "array.h"
using namespace std;

int main()
{
    Array<int> v = {100};
    //get the capacity
    try{
        cout << v.GetCapacity() << '\n';
        //add elements to the list
        v+=100;
        v+=214;
        v+=155;
        v+=423;
        v+=389;
        //add variables to the list
        int x=435;
        v+=x;
        //check the list
        v.Print();
        cout << '\n';

        //insert at specific location
        // v.Insert(223,485);
        v.Print();
        //delete an element
        v.Delete(6);
        v.Print();
        //for-each loop
        for(auto key: v)
        {
            cout << *key  <<' ';
        }
        cout <<'\n';
        v.Sort();
        v.Print();
        cout << v.BinarySearch(423) << '\n';
        cout << v.Find(155);
        cout << '\n';
    }catch(Exception e)
    {
        cout << "[Error] " << e.GetMsg() <<'\n';
    }

    return 0;
}