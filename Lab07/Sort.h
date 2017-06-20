#ifndef SORT_H
#define SORT_H
#include "BogoSort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

template<typename T>
class Sort
{
	public: //public methods
	void bogoSort(T arr[], int size);
	void bubbleSort(T arr[], int size);
	void insertionSort(T arr[], int size);
	void mergeSort(T arr[], int size);
	void quickSort(T arr[], int size);
	void quickSortMedian(T arr[], int size);
    
private: //private members
	BogoSort<T> bogo;
	BubbleSort<T> bubble;
	InsertionSort<T> insertion;
	MergeSort<T> merge;
	QuickSort<T> quick;
	

};
#include "Sort.hpp"
#endif
