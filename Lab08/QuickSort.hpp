#include "QuickSort.h"

template<typename T>
void QuickSort<T>::sort(T arr[], int size)
{
	
	quickSort(arr, 0, size-1, false); 
}

template<typename T>
void QuickSort<T>::sortWithMedian(T arr[], int size)
{
	
	quickSort(arr, 0, size-1, true);
}

template<typename T>
void QuickSort<T>::quickSort(T arr[], int first, int last, bool median) 
{
	if(first < last)
	{
		int p = partition(arr, first, last, median);// sets the pivot
		quickSort(arr, first, p-1, median);	//recurse and sorts the left of pivot
		quickSort(arr, p+1, last+1, median); //recurse and sorts right of pivot
	}	
	
}

template<typename T>
void QuickSort<T>::setMedianPivot(T arr[], int first, int last)
{
	//T first = arr[0];
	//T last = arr[size-1];
	T mid = last/2;
	if(first < last && mid < first || first > last && mid > first) //checks if first and last need to switch or if first and mid need to switch
	{ 	
		T temp = arr[0];
		arr[0] = arr[last];
		arr[last] = temp;
	}
	else if(mid< last && first<mid || mid> last && first>mid) // checks if mid needs to switch with first or last
	{
		T temp = arr[(last)/2];
		arr[(last)/2] = arr[last];
		arr[last] = temp;
	}
	
}

template<typename T>
int QuickSort<T>::partition(T arr[], int first, int last, bool median)
{	
	int pivotIndex= last;
	T pivot = arr[pivotIndex];
	
	if(median)
	{
		setMedianPivot(arr, first, last);
		partition(arr,first,last,false);

	}
	else if(median==false)
	{
		int fromLeft = first; 
		int fromRight = last;	

			
		while(arr[fromLeft] < pivot)
		{	
			fromLeft= fromLeft+1;
		}
		while(arr[fromRight] > pivot)
		{
			fromRight= fromRight-1;
		}
		if(fromLeft>fromRight)
		{
			T temp = arr[fromLeft];
			arr[fromLeft] = arr[fromRight];
			arr[fromRight]= temp;
			fromLeft++;
			fromRight++;
		}	
	}

 	return pivotIndex;
}




















