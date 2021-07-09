#include "sort.hpp"

void selectionSort(int arr[], int len) {

	for(int i = 0; i < len - 1 ; ++i)
		for(int j = i + 1; j < len; ++j)
			if(arr[j] < arr[i]) 
				std::swap(arr[j], arr[i]);

}
