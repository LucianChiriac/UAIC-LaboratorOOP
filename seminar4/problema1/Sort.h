#pragma once
#include <iostream>
#include <cstdlib>


class Sort
{
private:
    // add data members
    int* v;
    int size;
public:
    // add constuctors
    Sort(int elements, int start, int finish);
    void InsertSort(bool ascendent=false);
    void QuickSort(bool ascendent=false);
    void BubbleSort(bool ascendent=false);
    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);

};