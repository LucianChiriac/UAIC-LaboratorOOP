#include <iostream>
#include <cstring>
using namespace std;


template<typename K,typename V>
struct MapPair{
    K keys;
    V values;
    int index;
};

template<typename K,typename V>
class Iterrator{
    K* keys;
    V* values;
    int index;

public: 
    Iterrator(K* keys, V* values)
    {
        this->keys=keys;
        this->values=values;
        this->index=0;
    }
    bool operator !=(Iterrator &tmp)
    {
        return this->keys!=tmp.keys;
    }
    Iterrator& operator++()
    {
        this->index++;
        this->keys++;
        this->values++;
        return *this;
    }
    
    MapPair<K,V> operator*(){
        MapPair<K,V> tmp = {*this->keys, *this->values, this->index};
        return tmp;
    }

};

template<typename K,typename V>
class Map{
    int count,arrayLength;
    K* keys;
    V* values;
public:

    Map()
    {
        arrayLength=100;
        count=0;
        this->values = new V[arrayLength];
        this->keys = new K[arrayLength];
    }

    void Set(const K& key, const V value)
    {
        
    }

    bool Get(const K& key, V& value)
    {

        return false;
    }

    const int Count()
    {
        return this->count;
    }

    void Clear()
    {
        memset(this->keys,0, sizeof(this->keys)*sizeof(K));
        memset(this->values,0, sizeof(this->values)*sizeof(K));
        this->count=0;
    }

    bool Delete(const K& key)
    {
        for(int i=0;i<this->count;i++)
            if(this->keys[i]==key)
            {
                for(int j=i;j<this->count;j++)
                {
                    this->keys[j]=this->keys[j+1];
                    this->values[j]=this->values[j+1];
                }
                this->count--;
                return true;
            }
        return false;
    }

    bool Includes(const Map<K,V>& map) 
    {
        if(map.Count() != this->count)
            return false;
        for(int i=0;i<map.Count();i++)
            if(map[this->keys[i]]==nullptr)
                return false;
        return true;
    }


    V& operator[](const K& key)
    {
        for(int i=0;i<count;i++)
            if(this->keys[i]==key)
                return this->values[i];
        
        if(this->count==this->arrayLength)
        {
            this->arrayLength*=2;
            K* tmp1 = (K*)realloc(this->keys, this->arrayLength * sizeof(K));
            V* tmp2 = (V*)realloc(this->values, this->arrayLength * sizeof(V));
            this->keys=tmp1;
            this->values=tmp2;
            delete[] tmp1;
            delete[] tmp2;
        }

        this->keys[this->count]=key;
        this->values[this->count]=nullptr;
        this->count++;
        return this->values[count-1];
    }

    Iterrator<K,V> begin(){
        Iterrator<K,V> tmp = {&keys[0], &values[0]};
        return tmp;
    }
    Iterrator<K,V> end(){
        Iterrator<K,V> tmp = {&keys[count], &values[count]};
        return tmp;
    }

};