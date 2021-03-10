#pragma once
#include <iostream>
#include <cstdlib>
#include <cstdarg>
#include <cstring>

class Sort
{
private:
    // add data members
    int* v;
    int size;
    void QuickSort(int low, int high);
    void partition(int low, int high);

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