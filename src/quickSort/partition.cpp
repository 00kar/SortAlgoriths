#include "sort.hpp"


int partition(int arr[], int low, int high) {
	
	int pivot = arr[high];
	int i = low - 1;       // index of smaller element

	for(int j = low; j <= high - 1; ++j) {
		
		// checks if the current element is smaller than
		// or equal to pivot

		if(arr[j] <= pivot) { 
		
			++i;
			std::swap(arr[i], arr[j]);
		}
	}

	// places the pivot element at its correct position
	
	std::swap(arr[i+1], arr[high]);
	return (i + 1);  // returns partition index
}
