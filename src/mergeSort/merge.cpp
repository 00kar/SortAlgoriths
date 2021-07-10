#include "sort.hpp"


void merge(int* arr, int l, int m, int r) {

	int arr1Len = m - l + 1;
	int arr2Len = r - m;

	int* arr1 = new int[arr1Len];
	int* arr2 = new int[arr2Len];

	for(int i = 0; i < arr1Len; ++i)
		arr1[i] = arr[l+i];
	for(int i = 0; i < arr2Len; ++i)
		arr2[i] = arr[m + 1 + i];

	int indexArr1 = 0;
	int indexArr2 = 0;
	int indexArr = l;

	while(indexArr1 < arr1Len && indexArr2 < arr2Len) {
	
		if(arr1[indexArr1] <= arr2[indexArr2]) {
		
			arr[indexArr] = arr1[indexArr1];
			++indexArr1;
		} else {
		
			arr[indexArr] = arr2[indexArr2];
			++indexArr2;
		}
		
		++indexArr;
	}

	while(indexArr1 < arr1Len) {
	
		arr[indexArr] = arr1[indexArr1];
		++indexArr1;
		++indexArr;
	}

	while(indexArr2 < arr2Len) {
	
		arr[indexArr] = arr2[indexArr2];
		++indexArr2;
		++indexArr;
	}
}
