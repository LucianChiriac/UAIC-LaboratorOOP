#include <iostream>
#include <cstring>
using namespace std;
const int NMax = 255;


int main()
{
    char line[NMax]="";
    scanf("%[^\n]", line);
    cout << line << endl;
    return 0;
}
