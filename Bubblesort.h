//Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include "Sort.h"
#ifndef BUBBLESORT_H
#define BUBBLESORT_H

class BubbleSort:public Sort {
	public:
	//Instructor
	BubbleSort();
	
	//Destructor
	~BubbleSort();
	
	//Allows the use of Sort as a pure virtual function
	virtual void SortArr(int Arr[]);
};
#endif
