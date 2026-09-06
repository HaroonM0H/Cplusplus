#include "bubblesort.h"
#include <iostream>

void bubblesort() {
	int arr[] = { 2, 5, 1, 5 , 7, 3, 8 };
	int size = sizeof(arr) / sizeof(arr[0]);

	for(int element : arr){
		std::cout << element << " ";
	}
	sort(arr, size);
	std::cout << "\n";
	for (int element : arr) {
		
		std::cout << element << " ";
	}

}

void sort(int array[], int size) {
	int temp;

	for (int i = 0; i < size - 1 ; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}


}