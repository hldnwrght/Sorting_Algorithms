//Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#ifndef SORT_H
#define SORT_H

class Sort{
	public:
		//Constructor
		Sort(){
		}
		//Destructor
		~Sort(){
		}
		//Makes Sort Arr a virtual class
		virtual void SortArr(int Arr[]) = 0;
};
#endif