#include <iostream>
#include "map.h"
using namespace std;

int main()
{

    Map<int, const char *> m;
    m[10] = "C++";
    m[20] = "test";
    m[30] = "Poo";

    for (auto[key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    m[20] = "result";
    m.Set(40,"result2");


    Map<int, const char *> map2;
    map2[10]="OK!";
    map2[20]="tes2t";
    m.Includes(map2);

    for (auto[key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }

    cout << '\n';
    return 0;
}