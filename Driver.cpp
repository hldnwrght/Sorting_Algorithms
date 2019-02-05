//Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <string>
#include "Sort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"

int main (void){
	//This sets all the variables for the program
	int Ch1, Ch2, j, Con = 0, x = 0;
	bool L1 = true, L2 = true;
	int Arr[50];
	
	//Creates an instance of Insertion and Sort
	Sort * Insertion;
	Sort * Bubble;
	
	//Loops until untrue
	while (L1 == true){
		
		//Loops until it is true
		while (L2 == true){
			
			//First menu screen
			std::cout << "1.  Load Integers (From File) \n";
			std::cout << "2.  Exit Program \n\n";
			std::cout << "Please enter your selection:  ";
			std::cin >> Ch1;
			
			
			//If the user inputs a 1
			if (Ch1 == 1){
				//creates a read File and opens it
				std::ifstream File;
				File.open("data.txt");
				
				//If the file exists it goes into the if statement
				if(File.is_open()){
					std::cout << "Unsorted Array: ";
					
					//creates the necessary elements to copy the file text and convert it to Integers
					std::string currentLine;
					std::stringstream converter;
					std::stringstream ss;
					std::string stringIn;
					
					//Loops through till all lines are done
					while(getline(File, currentLine)){
						ss.clear();
						ss.str("");
						ss.str(currentLine);
						
						//Loops through until all integers between commas have been read and assigns them into an array
						while(getline(ss, stringIn, ',')){
							
							converter.clear();
							converter.str("");
							converter << stringIn;
							converter >> Arr[x];
							x++;
							
						}
						
					}
					x = 0;
					//closes the file
					File.close();
					L2 = false;
					Con = 1;
					
					//Loops through and prints the array
					for(j = 0; j<=49; j++){
						std::cout << Arr[j] << ", ";
					}
				}
				//If the file is not found it goes through to this exception
				else{
					std::cout << "Error: No file found";
				}
			}
			
			//Exits program
			else if (Ch1 == 2){
				std::cout << "Program Exiting...\n";
				L1 = false;
				L2 = false;
			}
			
			//Takes user through incorrect input phase
			else{
				std::cout << "Error: incorrect input please try again!\n\n";
			}
		}
		
		//If the user Reads the file then this IF statement goes through
		if (Con == 1){
			
			//second menu screen
			std::cout << "\n\n\n1.  Insertion Sort\n";
			std::cout << "2.  Bubble Sort\n";
			std::cout << "3.  Exit Program\n\n";
			std::cout << "Please Enter Your Selection:  ";
			std::cin >> Ch2;
			
			//If user inputs a 1 then it goes through here
			if(Ch2 == 1){
				
				//creates a variable for InsertionSort
				Insertion = new InsertionSort();
				
				//Sends the Array to Insertion Sort
				Insertion->SortArr(Arr);
				
				std::cout << "Insertion Sort:  ";
				
				//Prints the Array
				for(j = 0; j<=49 ; j++ ){
					std::cout<< Arr[j] << ",";
				}
				
				std::cout <<"\b";
				std::cout <<" ";
				std::cout <<"\n\n";
				delete Insertion;
				L2 = true;
				Con = 0;
			}
			
			//If the user inputs a 2
			else if(Ch2 == 2){
				//creates a variable for BubbleSort
				Bubble = new BubbleSort();
				
				//Sends Array to the BubbleSort
				Bubble->SortArr(Arr);
				 
				std::cout << "Bubble Sort:  ";
				
				//Loops through the array and prints it
				for(j = 0; j<=49 ; j++ ){
					std::cout<< Arr[j] << ",";
				}
				
				std::cout <<"\b";
				std::cout <<" ";
				std::cout <<"\n\n";
				delete Bubble;
				
				L2 = true;
				Con = 0;
			}
			
			
			//exits the program
			else{
				std::cout << "Program Exiting...\n\n";
				L1 = false;
				Con = 0;
			}
		}
	}
	return 0;
}