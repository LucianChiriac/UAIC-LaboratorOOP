#include <iostream>
#include <fstream>
#include <string>
using namespace std;
ifstream f("file.in");

int main()
{
    string sentace;
    f.get(sentace);
    cout << sentace;

    //linux debug
    cout << '\n';
    return 0;
}