#include "Math.h"

int Math::Add(int a,int b)
{
    return (a+b);
}
int Math::Add(int a,int b,int c)
{
    return (a+b+c);
}

int Math::Add(double a,double b)
{
    return (int)(a+b);
}
int Math::Add(double a,double b,double c)
{
    return (int)(a+b+c);
}

int Math::Mul(int a,int b)
{
    return (a*b);
}

int Math::Mul(int a,int b,int c)
{
    return (a*b*c);
}

int Math::Mul(double a,double b)
{
    return (int)(a*b);
}
int Math::Mul(double a,double b,double c)
{
    return (int)(a*b*c);
}

int Math::Add(int count, ...)
{
    va_list args;
    va_start(args, count);
    int sum=0;
    for(int i=0;i<count;i++)
    {
        int x = va_arg(args,int);
        sum  += x;
    }
    va_end(args);
    return sum;
}

char* Math::Add(const char *a, const char *b)
{
    if(a==nullptr || b==nullptr)
        return nullptr;
    return "test";
}