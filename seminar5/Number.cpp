#include "Number.h"
using namespace std;

Number::Number(const char *value, int base)
{
    if(base<2 || base>16)
    {
        cout <<"Couldn't initialize class\n";
        return;
    }
    this->value = new char[strlen(value)+3];
    strcpy(this->value,  value);
    this->base=base;
}

Number::~Number()
{
    delete this->value;
    this->base=0;
}

void Number::SwitchBase(int newBase)
{

}
void Number::Print()
{
    cout << this->value;
}
int  Number::GetDigitsCount()
{
    return strlen(this->value);
}
int  Number::GetBase()
{
    return this->base;
}