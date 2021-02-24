#include <iostream>
#include "functions.h"
#include "Student.h"
using namespace std;

int main()
{
    Student s1, s2;
    s1.set_name("zaBogdan");
    s2.set_name("vimpower");
    compare_name(s1,s2);
    cout << '\n';
    return 0;
}