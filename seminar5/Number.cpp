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
    this->decimal = this->switchDecimal();
}

Number::~Number()
{
    delete this->value;
    this->base=0;
}

void Number::SwitchBase(int newBase)
{
    if(this->GetBase()==newBase)
        return;
    if(newBase==10)
        this->value=this->buildStringDecimal();
    else this->switchFromDecimal(newBase);
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

int Number::switchDecimal()
{
    int len = strlen(this->value);
    int power = 1;
    int num = 0;

    for(int i=len-1;i>=0;i--)
    {
        num += this->getVal(this->value[i])*power;
        power*=base;
    }
    return num;

}
char Number::reVal(int  n)
{
    if(n>=0 && n<=9)
        return n+'0';
    return n-10+'A';
}
void Number::switchFromDecimal(int base)
{
    int poz=0;
    int cn = this->decimal;
    char *newbase = new char[strlen(this->value)*2];

    while(cn>0)
    {
        newbase[poz++]=reVal(cn%base);
        cn/=base;
    }
    newbase[poz]='\0';
    this->base = base;
    int baselen = strlen(newbase);
    for(int i=0;i<baselen/2;i++)
        swap(newbase[i], newbase[baselen-i-1]);
    delete this->value;
    this->value = new char[baselen+10];
    this->value = newbase;
}
char* Number::buildStringDecimal()
{
    int len = strlen(this->value);
    char* base = new char[len+5];
    int poz = 0;
    int cn  = this->decimal;
    while(cn)
    {
        base[poz++] = cn%10+'0';
        cn/=10;
    }
    for(int i=0;i<poz/2;i++)
        swap(base[i],  base[poz-i-1]);
    base[poz]='\0';
    return base;
}

/**
 * & copiere
 * && mutare
 * */