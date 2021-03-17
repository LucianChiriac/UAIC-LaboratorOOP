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
    if(this->GetBase()!=10)
        this->switchDecimal();
    if(newBase==10)
        return;
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

int Number::getVal(char c)
{
    if(c>='0' && c<='9')
        return (int)c-'0';

    return (int)c-'A'+10;
}

void Number::switchDecimal()
{
    int len = strlen(this->value);
    int power = 1;
    int num = 0;

    for(int i=len-1;i>=0;i--)
    {
        num += this->getVal(this->value[i])*power;
        power*=base;
    }
    int poz=0;
    int cn=num;
    while(cn)
    {
        poz++;
        cn/=10;
    }
    delete this->value;
    this->value = new char[poz+3];
    this->value[poz] = '\0';
    while(poz)
    {
        this->value[--poz] = num%10+'0';
        num/=10;
    }
    this->base=10;
}
void Number::switchFromDecimat(int base)
{

}