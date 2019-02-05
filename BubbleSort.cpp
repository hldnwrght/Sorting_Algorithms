//Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include <iostream>
#include "BubbleSort.h"

//Constructor
BubbleSort::BubbleSort(){
	
}
//Destructor
BubbleSort::~BubbleSort(){
	
}

//Bubblesorts the Array
void BubbleSort::SortArr(int Arr[]){
	int i, j, n = 50, temp;
	 for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(Arr[j]>Arr[j+1])
            {
                temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
            }
    }
}