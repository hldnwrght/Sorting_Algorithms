//Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include <iostream>
#include "InsertionSort.h"
//Constructor
InsertionSort::InsertionSort(){

}
	
//Destructor
InsertionSort::~InsertionSort(){

}

//Insertion Sorts the Array
void InsertionSort::SortArr(int Arr[]){
	int a, b, temp;
	
	for(a = 1; a <50; a++){
		temp = Arr[a];
		for(b = a-1; (b>=0) && (Arr[b] > temp); b--){
			Arr[b + 1] = Arr[b];
		}
		Arr[b+1] = temp;
	}
	
}