#include "vector.h"


MyVector::MyVector()
{
    this->size=0;
    this->counter=0;
}
MyVector::MyVector(int size)
{
    this->counter=0;
    this->size=counter;
}

bool MyVector::Add(int x) // return true if the value was added. As a result, the size of the vector increases with one.
{
    this->vec.push_back(x);
    return true;
}

bool MyVector::Delete(int index) // returns true if the value from the index was removed. As a result, the size of the vector decreases with one.
{
    if(index>(int)this->vec.size())
        return false;
    this->vec.erase(this->vec.begin()+index);
    return true;
}

void MyVector::Iterate(int(*func)(int))
{
    for(int i=0;i<(int)this->vec.size();i++)
        this->vec[i] = func(this->vec[i]);
}
void MyVector::Filter(bool(*func)(int))
{
    for(int i=0;i<(int)this->vec.size();i++)
        if(func(this->vec[i]))
        {
            this->Delete(i);
            i--;
        }
}