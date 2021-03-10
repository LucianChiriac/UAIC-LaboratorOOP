#pragma once
#include <iostream>
#include <cstdlib>
#include <cstdarg>
#include <cstring>
#include <algorithm>

class Sort
{
private:
    // add data members
    int* v;
    int size;

public:
    // add constuctors
    Sort(int elements, int start, int finish);
    // Sort()
    Sort(int *vec, int size);
    Sort(int count, ...);
    Sort(char *c);
    void InsertSort(bool ascendent=false);
    void QuickSort(bool ascendent=false);
    void BubbleSort(bool ascendent=false);
    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);

};