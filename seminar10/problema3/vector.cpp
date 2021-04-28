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

bool MyVector::Add(int) // return true if the value was added. As a result, the size of the vector increases with one.
{

}

bool MyVector::Delete(int index) // returns true if the value from the index was removed. As a result, the size of the vector decreases with one.
{

}

void MyVector::Iterate(std::function<void()> &iterateLambda)
{

}
void MyVector::Filter(std::function<void()> &filterLambda)
{

}

std::function<void()> &MyVector::iterateLambda()
{

}
std::function<void()> &MyVector::filterLambda()
{
    
}