#include <cstdlib>


template<typename T>
void BogoSort<T>::sort(T arr[], int size)
{
	int singleRandomDouble;

	if(!isSorted(arr,size))
	{
		for(int i=0; i<size;i++)//s
		{
			singleRandomDouble = rand();
			int ind = singleRandomDouble % size;
			T temp = arr[i]; 
			arr[i] = arr[ind];
			arr[ind] = temp;
		}
	}
	while(isSorted(arr,size)==false)
	{
	sort(arr, size);
	}
	
}

template<typename T>
bool BogoSort<T>::isSorted(T arr[], int size) //determines if the array is sorted
{
	for(int i=0; i< size-1; i++)
	{
		if(arr[i] > arr[i+1])
		{
		
			return false;
		}
	}
	return true;
	
}

