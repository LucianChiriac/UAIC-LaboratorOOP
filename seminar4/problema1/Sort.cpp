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
    for(int i=1;i<this->size;i++)
    {
        cout << this->v[i] << '\n';
        int key = this->v[i];
        int j = i-1;
        while((ascendent? key<this->v[j] : key>this->v[j]) && j>=0)
        {
            this->v[j+1]=this->v[j];
            j--;
        }
        this->v[j+1]=key;
    }
}

void Sort::QuickSort(bool ascendent) {
    int pivot;
    int low = 0;
    int high = this->size-1;
    while(low<high)
    {
        int i=low;
        int j=high;
        pivot = this->v[low];
        while(i<j)
        {
            while(this->v[j]>pivot)
                j--;
            for(this->v[i]=this->v[j];i<j && this->v[i]<=pivot;i++)
                this->v[i]=this->v[j]
        }

        this->v[i]=pivot;
        if(i-low<high-i)
        {
            sort(this->v,low, i-1);
            low = i+1;
        }else{
            
        }

    }


}


void Sort::BubbleSort(bool ascendent) {
    bool sortat=true;
    do{
        sortat = true;
        for(int i=0;i<this->size-1;i++)
        {
            if((ascendent ? this->v[i]>this->v[i+1] : this->v[i]<this->v[i+1]))
            {
                cout << "SWAP: " << this->v[i] << ' ' << this->v[i+1] << '\n';
                sortat=false;
                swap(this->v[i], this->v[i+1]);
            }
        }
    }while(!sortat);
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