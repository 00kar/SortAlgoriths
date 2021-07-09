#include "sort.hpp"

int main() {
	
	int arr[] = {10, 7, 8, 9, 1, 5, 45, 0};
	int len = sizeof(arr)/sizeof(arr[0]);
	std::cout << "Given array\n";
	printArray(arr, len);
	quickSort(arr, 0, len-1);
	std::cout << "Sorted array\n";
	printArray(arr, len);	
	return 0;
}
