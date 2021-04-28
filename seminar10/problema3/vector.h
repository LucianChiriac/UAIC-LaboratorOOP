#pragma once
#include <functional>
#include <algorithm>

class MyVector { 
    int *vec;
    int size;
    int counter;

public:
    MyVector();
    MyVector(int);

    bool Add(int); // return true if the value was added. As a result, the size of the vector increases with one.
    bool Delete(int); // returns true if the value from the index was removed. As a result, the size of the vector decreases with one.
    
    void Iterate(std::function<void()> &iterateLambda);
    void Filter(std::function<void()> &filterLambda);

    std::function<void()> &iterateLambda();
    std::function<void()> &filterLambda();

};