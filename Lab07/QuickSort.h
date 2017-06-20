#ifndef QUICKSORT_H
#define QUICKSORT_H

template<typename T>
class QuickSort
{
	public: //public methods
	void sort(T arr[], int size);
	void sortWithMedian(T arr[], int size);
	
	private: //private methods
	void quickSort(T arr[], int first, int last, bool median);
	void setMedianPivot(T arr[], int first, int last);
	int partition(T arr[], int first, int last, bool median);

};
#include "QuickSort.hpp"
#endif
