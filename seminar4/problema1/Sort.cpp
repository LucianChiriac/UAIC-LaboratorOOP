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

Sort::Sort(int *vec, int size)
{
    this->v = new int[size+5];
    this->size = size;
    for(int i=0;i<this->size;i++)
    {
        this->v[i] = vec[i];
    }
}

Sort::Sort(int count, ...)
{
    this->size=count;
    this->v = new int[count+5];
    va_list args;
    va_start(args, count);
    for(int i=0;i<count;i++)
    {
        int x = va_arg(args,int);
        this->v[i] = x;

    }
    va_end(args);
}

Sort::Sort(char *c)
{
    char *p;
    this->v = new int[strlen(c)];
    p  = strtok(c, ",");
    int nr=0;
    while(p)
    {

        this->v[nr] = atoi(p);
        nr++;
        p = strtok(NULL, ",");
    }
    this->size = nr;
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