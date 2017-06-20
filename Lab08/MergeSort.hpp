
#include <iostream>

template<typename T>
void MergeSort<T>::sort(T arr[], int size)
{




	T* sortedd=mergeSort(arr, size);//calls mergSort
	for(int i=0;i<size;i++)
	{
		arr[i]=sortedd[i];
	}

}

template<typename T>
MergeSort<T>::~MergeSort()
{
	while(pointers.empty() == false)
	{	
		delete[] pointers.top();
		pointers.pop();
	}
	
}

template<typename T> 
T* MergeSort<T>::merge(T* left, T* right, int sizeLeft, int sizeRight)
{

		
	T* sorted = new T[sizeLeft+sizeRight];
	
	int lefti = 0;//left index
	int righti= 0;//right index
	int sortedi=0;//sorted index
	pointers.push(sorted);	
	
	while(lefti < sizeLeft && righti < sizeRight)
	{
		if(left[lefti]<=right[righti])
		{
			sorted[sortedi]=left[lefti];			
			lefti++;
			sortedi++;
		}
		else
		{
			sorted[sortedi]=right[righti];
			righti++;
			sortedi++;		
		}
		
	}
	if(sizeLeft > lefti)
	{
		for(int i=lefti; i < sizeLeft; i++)
		{	
			sorted[sortedi]= left[lefti];
			lefti++;			
			sortedi++;
		}
		
	}
	
		
	if(sizeRight > righti)
	{	
		for(int i=righti; i< sizeRight;i++)	
		{
			sorted[sortedi] = right[righti];
			righti++;			
			sortedi++;
		}
	
	}
	
return	sorted;

}

template<typename T> 
T* MergeSort<T>::mergeSort(T*arr, int size)
{

	if(size == 0||size == 1)
	{
		return arr;
	} 
	else
	{	
		int mid = size /2;
		

		T* left= arr;
		//pointers.push(left);
		


		T* right= arr + mid;
		//pointers.push(right);
		
		
		
		return merge(mergeSort(left,mid), mergeSort(right,size-mid), mid, size-mid);//returns sorted array

	}
}
