#include <iostream>
using namespace std;
template <typename T>
class Vector
{
    T *arr;
    int size=100;
public: 
    int poz=0;

    Vector()
    {
        arr = new T[this->size];
    }
    int getSize()
    {
        return this->size;
    }
    void Push(const T &a)
    {
        if(this->poz>=this->size)
        {
            this->size*=2;
            realloc(arr, this->size);
        }
        this->arr[this->poz++]=a;
    }
    T& Pop()
    {
        return this->arr[this->poz];
    }
    T& get()
    {
        return this->arr;
    }
};