

template<typename T>
void InsertionSort<T>::sort(T arr[], int size)
{
	for(int unsorted =1; unsorted <size; unsorted++)
	{
		T nextItem= arr[unsorted];
		int loc = unsorted;
		while(loc>0 && arr[loc-1] > nextItem)
		{
			arr[loc]= arr[loc-1];
			loc--;
		}
		arr[loc] = nextItem;
	 }
}


