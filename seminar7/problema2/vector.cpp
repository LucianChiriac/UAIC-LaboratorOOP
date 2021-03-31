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

    
    void push(const T &a)
    {
        if(this->poz>=this->size)
        {
            this->size*=2;
            realloc(arr, this->size);
        }
        this->arr[this->poz++]=a;
    }
    
    T& pop()
    {
        return this->arr[this->poz-1];
    }
    
    void remove(const int s)
    {
        if(s>=this->poz)
            return;
        for(int i=s;i<this->poz;i++)
            this->arr[i] = this->arr[i+1];
        this->arr[this->poz]=0;
        this->poz--;
    }

    void insert(const T &a)
    {

    }
    int get(const T &a)
    {
        for(int i=0;i<this->poz;i++)
            if(a==this->arr[i])
                return i;
        return -1;
    } 

};