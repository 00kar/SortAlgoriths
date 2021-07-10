#include "sort.hpp"


int main() {

	int arr[] = {12, 11, 45, 13, 5, 6, 7, 22, 0};
	int len = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Given array\n";
	print(arr, len);

	mergeSort(arr, 0, (len - 1));

	std::cout << "Sorted array\n";
	print(arr, len);

	return 0;
}
