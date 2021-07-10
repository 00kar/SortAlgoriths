#include "sort.hpp"


void quickSort(int arr[], int low, int high) {

	if(low < high) {
		
		// partition index
		int p_index = partition(arr, low, high);
		
		// sorts before partition index
		quickSort(arr, low, p_index - 1);

		// sorts after partition index
		quickSort(arr, p_index + 1, high);
	}
}
