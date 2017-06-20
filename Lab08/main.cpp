#include "Sort.h"
#include <iostream>
#include <string>
#include <sys/time.h>
#include <ctime>
#include <cstdlib>
#include <stack>
#include <iomanip>

#define CALL_SORT_FUNC(instance, funcPtrToSort) ( (instance).*(funcPtrToSort) )
typedef void (Sort<double>::*SortFunction)(double arr[], int size);

int j;
unsigned long getTime()
{
    timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1000000ul + tv.tv_usec;
}



void printSortTime(SortFunction sorts[], Sort<double>& s, int index, std::string name, int timeLimit)
{
	double time =0;
	int arraySize=0;
	int size =0;
	long totalTime =0;
	unsigned long start1 = 0;
	unsigned long total =0;
	while(time < timeLimit)
	{

			size = arraySize;
			double* arr = new double[arraySize];
			
			
			
			for(int j=0 ; j< arraySize;j++);
			{
				
				double singleRandomDouble = drand48();
				arr[j]= singleRandomDouble;
			
			}
			start1 = getTime();
			CALL_SORT_FUNC(s, sorts[index])(arr, arraySize);
			time = getTime() - start1;
			totalTime = time;
			arraySize++;
			delete[] arr;
	}
	
	std::cout<< name <<"	:"<< size <<" in a total of "<<totalTime<<"micro secs \n";
}  









int main()
{	
	//Sort instance used when calling the CALL_SORT_FUNC macro
	Sort<double> sortInstance;

        //Stores an array of function pointers to all the sort methods in the sort class
	SortFunction sorts[] = { &Sort<double>::bogoSort,  	&Sort<double>::bubbleSort,
				 &Sort<double>::insertionSort, 	&Sort<double>::mergeSort,
				 &Sort<double>::quickSort,	&Sort<double>::quickSortMedian};

        //call bubbleSort via a function pointer


   //     CALL_SORT_FUNC(sortInstance, sorts[0])(someArrayHere, sizeOfArrayHere);
	
			
	double* arr = new double[7];
   	 for(int j=0 ; j< 7;j++)
	{
				
		double singleRandomDouble = rand() % 10;
		arr[j]= singleRandomDouble;
				
	}

		unsigned long start1 = getTime();//get the time of bubble sort
		CALL_SORT_FUNC(sortInstance, sorts[0])(arr, 7);

		unsigned long bogotime = getTime() - start1;
	
	std::cout<<"Time required for bogo sort to sort 7 numbers: "<< bogotime <<" micro secs \n";
	std::cout<<"In that amount of time, the other sorts can sort the following amounts: \n";
	std::cout<<"-------------------------------------------------------------------------------- \n";
		

	printSortTime(sorts,sortInstance, 1, "Bubble Sort",bogotime);
	printSortTime(sorts,sortInstance, 2, "Inserton Sort",bogotime);
	printSortTime(sorts,sortInstance, 3, "Merge Sort",bogotime);
	printSortTime(sorts,sortInstance, 4, "Quick Sort",bogotime);
	printSortTime(sorts,sortInstance, 5, "Quick Sort (3-median)",bogotime);

}
