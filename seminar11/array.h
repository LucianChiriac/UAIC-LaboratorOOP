#include <exception>
#include <iostream>
using namespace std;

class OutOfBounds : public exception
{
	virtual const char* what() const throw()
	{
		return "Index out of bound!";
	}
};

class Compare
{
public:
	virtual int CompareElements(void* e1, void* e2) = 0;
};

template<class T>
class ArrayIterator
{
private:
	int Current; // mai adaugati si alte date si functii necesare pentru iterator
	T* val;
public:
	ArrayIterator(T* val)
	{
		this->val = val;
		this->Current=0;
	}

	ArrayIterator& operator ++ ()
	{
		this->val+=sizeof(T*);
		this->Current++;
		return *this;
	}
	ArrayIterator& operator -- ()
	{
		try{
			if(this->Current<=0)
				throw *(new OutOfBounds);
			this->val--;
			this->Current--;
		}catch(exception& e){
			std::cout << "[Error] " << e.what() << '\n';
		}
	}

	bool operator==(ArrayIterator<T> &tmp)
	{
		return this->val==tmp.val;
	}
	bool operator!=(ArrayIterator<T> &tmp)
	{
		return !(this->val==tmp.val);
	}

	T* GetElement()
	{
		return this->val;
	}
	T* operator*()
	{
		return this->GetElement();
	}


};

template<class T>
class Array
{
private:
	T** List; // lista cu pointeri la obiecte de tipul T*
	int Capacity; // dimensiunea listei de pointeri
	int Size; // cate elemente sunt in lista

public:

	Array() // Lista nu e alocata, Capacity si Size = 0
	{
        this->Capacity=0;
        this->Size=0;
    }
    ~Array() // destructor
    {
        delete[] this->List;
    }
	Array(int capacity) // Lista e alocata cu 'capacity' elemente
	{
        this->Capacity=capacity;
        this->List = new T*[this->Capacity];
        for(int i=0;i<this->Capacity;i++)
            this->List[i]= new T;
        this->Size = 0;
    }
    Array(const Array<T> &otherArray); // constructor de copiere

	T& operator[] (int index) // arunca exceptie daca index este out of range
    {
        if(index>this->Size)
            throw "Index out of bounds";
        return this->List[index];
    }

	// adauga un element de tipul T la sfarsitul listei si returneaza this
	const Array<T>& operator+=(const T &newElem) 
    {
        if(this->Size>this->Capacity)
        {
			this->Capacity*=2;
			T** tmp = (T**)realloc(this->List, this->Capacity*sizeof(T*));
			this->List = tmp;
        }
        *this->List[this->Size++]= newElem;
        return *this;
    }

	// adauga un element pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie
	const Array<T>& Insert(int index, const T &newElem) 
	{
		try{
			if(index>this->Size || index<0 || index>this->Capacity)
				throw *(new OutOfBounds);
			*List[index]=newElem;
		}catch(exception& e)
		{
			std::cout << "[Error] " << e.what() << '\n'; 
		}
		return *this;
    }
	// adauga o lista pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie
    const Array<T>& Insert(int index, const Array<T> otherArray)
	{

	} 
	
	// sterge un element de pe pozitia index, returneaza this. Daca index e invalid arunca o exceptie
	const Array<T>& Delete(int index)
	{
		try{
			if(index>this->Size || index<0)
				throw *(new OutOfBounds);
			for(int i=index;i<this->Size-1;i++)
			{
				this->List[i] = this->List[i+1];
			}
			this->List[this->Size]=0;
			this->Size--;
		}catch(exception& e)
		{
			std::cout << "[Error] " << e.what() << '\n'; 
		}
		return *this;
		
	}


	bool operator=(const Array<T> &otherArray)
	{

	}


	void Sort(); // sorteaza folosind comparatia intre elementele din T
	void Sort(int(*compare)(const T&, const T&)); // sorteaza folosind o functie de comparatie
	void Sort(Compare *comparator); // sorteaza folosind un obiect de comparatie

	// functii de cautare - returneaza pozitia elementului sau -1 daca nu exista
	int BinarySearch(const T& elem); // cauta un element folosind binary search in Array
	int BinarySearch(const T& elem, int(*compare)(const T&, const T&));//  cauta un element folosind binary search si o functie de comparatie
	int BinarySearch(const T& elem, Compare *comparator);//  cauta un element folosind binary search si un comparator

	int Find(const T& elem); // cauta un element in Array
	int Find(const T& elem, int(*compare)(const T&, const T&));//  cauta un element folosind o functie de comparatie
	int Find(const T& elem, Compare *comparator);//  cauta un element folosind un comparator

	void Print()
	{
		for(int i=0;i<this->GetSize();i++)
			std::cout << *this->List[i] << ' ';
		std::cout << '\n';
	}
	int GetSize()
    {
        return this->Size;
    }
	int GetCapacity()
    {
        return this->Capacity;
    }

	ArrayIterator<T> GetBeginIterator()
	{
		ArrayIterator<T> tmp = {this->List[0]};
		return tmp;
	}
	ArrayIterator<T> GetEndIterator()
	{
		ArrayIterator<T> tmp = {this->List[this->Size]};
		return tmp;
	}

	ArrayIterator<T> begin()
    {
		return this->GetBeginIterator();
    }
    ArrayIterator<T> end()
    {
		return this->GetEndIterator();
    }

};