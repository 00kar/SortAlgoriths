#include "sort.hpp"

int main() {

	int arr[] = {54, 78, 12, 120, 0, 11, 56};
	int len = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Given array\n";
	printArray(arr, len);

	selectionSort(arr, len);

	std::cout << "\nSorted array\n";
	printArray(arr, len);

	return 0;
}
