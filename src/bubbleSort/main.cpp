#include "sort.hpp"


int main() {

	int arr[] = {89, 45, 78, 23, 0, 12, 21, 54, 6};
	int len = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Given array\n";
	printArray(arr, len);

	bubbleSort(arr, len);

	std::cout << "Sorted array\n";
	printArray(arr, len);

	return 0;
}
