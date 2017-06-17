/*	File Name: <main.cpp> 
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab6
	Description: Merge and Bubble Sort
	Last Changed: 4/4/2014
*/
#include <iostream>
#include <sys/time.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "BubbleSort.h"
#include "MergeSort.h"
using namespace std;

	
int j;	
unsigned long getTime()
{
    timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1000000ul + tv.tv_usec;
}
int main()
{


	BubbleSort<double> bub;
	MergeSort<double> marge;
	MergeSort<double> margeSorted;
	int N=10;
	cout<< "#of elements\t" <<"bubble sort time\t" <<"merge sort time" << endl;
	cout<< "------------------------------------------------------------" << endl;
	

		
		
		for(int N= 10; N < 1000001; N *=10)
		{
			
			double* arr = new double[N];
			
			
			for(int j=0 ; j< N;j++);
			{
				
				double singleRandomDouble = drand48();
				arr[j]= singleRandomDouble;
				
			}
		
		
		unsigned long start1 = getTime();//get the time of bubble sort
		bub.sort(arr, N);
		unsigned long totaltime = getTime() - start1;
	



			
		unsigned long start2 = getTime(); //get the time of merge sort
		marge.sort(arr,N);
		unsigned long totaltime2 = getTime() - start2;
		
				
		cout<< N << "\t \t" << totaltime << "\t \t" <<totaltime2 <<endl;

		
		}
		



	
//}
	
		

			
	
		

	
	

       return(0);
exit(1);
}
