//Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include "Sort.h"
#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

class InsertionSort:public Sort {
	public:
	//Constructor
	InsertionSort();
	//Destructor
	~InsertionSort();
	//Allows the use of Sort as a pure virtual function
	virtual void SortArr(int Arr[]);
};
#endif