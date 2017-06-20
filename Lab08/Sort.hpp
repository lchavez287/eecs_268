template<typename T>
void Sort<T>::bogoSort(T arr[], int size)
{
	bogo.sort(arr, size);
}

template<typename T>
void Sort<T>::bubbleSort(T arr[], int size)
{
	bubble.sort(arr, size);
}

template<typename T>
void Sort<T>::insertionSort(T arr[], int size)
{
	insertion.sort(arr, size);
}

template<typename T>
void Sort<T>::mergeSort(T arr[], int size)
{
	merge.sort(arr, size);
}

template<typename T>
void Sort<T>::quickSort(T arr[], int size)
{
	quick.sort(arr, size);
}
	
template<typename T>// come back after making quick sort method
void Sort<T>::quickSortMedian(T arr[], int size)
{
	
	quick.sortWithMedian(arr, size);
}
