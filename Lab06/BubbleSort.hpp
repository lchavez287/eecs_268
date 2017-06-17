/*	File Name: <main.cpp> 
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab6
	Description: Merge and Bubble Sort
	Last Changed: 4/4/2014
*/
#include <iostream>

template<typename T>
void BubbleSort<T>::sort(T arr[], int size)
{
	
	for(int i =0; i < (size-1);i++)
	{
		for(int j=0; j< (size-1-i); j++)
		{
			if(arr[j]> arr[j+1])
			{
				T temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
							
}			


