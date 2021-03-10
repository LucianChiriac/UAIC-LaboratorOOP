#include "Sort.h"
using namespace std;

Sort::Sort(int elements, int start, int finish)
{
    this->v = new int[elements+5];
    this->size = elements;
    for(int i=0;i<this->size;i++)
    {
        this->v[i]=start+rand()%(finish-start);
    }
}


void Sort::InsertSort(bool ascendent) {
    
}
void Sort::QuickSort(bool ascendent) {

}
void Sort::BubbleSort(bool ascendent) {

}
void Sort::Print() {
    for(int i=0;i<this->size;i++)
        cout << this->v[i] << ' ';
}
int Sort::GetElementsCount(){
    return this->size;
}
int Sort::GetElementFromIndex(int index){
    return this->v[index];
}