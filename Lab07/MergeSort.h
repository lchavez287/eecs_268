
#ifndef MERGESORT_H  
#define MERGESORT_H
#include <stack>
using namespace std;

template<typename T>
class MergeSort
{
	private: //private member
	stack<T*> pointers;  

	public: //public methods
	void sort(T arr[], int size);
	~MergeSort();

	private: //private methods
	T* merge(T* left, T* right, int sizeLeft, int sizeRight);
	T* mergeSort(T* arr, int size);
};
#include "MergeSort.hpp"
#endif
