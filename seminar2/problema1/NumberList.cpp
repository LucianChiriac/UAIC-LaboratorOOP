#include "NumberList.h"
using namespace std;

void NumberList::Init()
{
    this->count = 0;
}
bool NumberList::Add(int x)
{
    if(this->count >= 10)
    {
        this->count--;
        return false;
    }
    this->numbers[this->count]=x;
    this->count++;
    return true;
    
}
