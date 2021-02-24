#include "Student.h"

char* Student::get_name()
{
    return this->name;
}
void Student::set_name(char* name)
{

}
float& Student::get_mathematics()
{
    return this->mathematics;
}
void Student::set_mathematics(float x)
{

}
float& Student::get_english()
{
    return this->english;
}
void Student::set_english(float x)
{

}
float& Student::get_history()
{
    return this->history;
}
void Student::set_history(float x)
{

}
float Student::Average()
{
    return (this->history+this->english+this->mathematics)/3.0;
}