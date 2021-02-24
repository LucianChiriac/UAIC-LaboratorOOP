#include "functions.h"
#include <string>
using namespace std;

int compare_name(Student s1, Student s2)
{
    if(s1.get_name() == s2.get_name())
        return 0;
    return s1.get_name()>s2.get_name() ? 1 : -1;
}
int compare_average(Student, Student)
{

}
int compare_english(Student, Student)
{

}
int compare_math(Student, Student)
{

}
int compare_history(Student, Student)
{
    
}
