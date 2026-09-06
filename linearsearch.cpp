#include "linearsearch.h"
#include <iostream>


void search() {
	int target{};
	int index{};
	int arr[] = { 1, 3, 4, 5, 7, 8 };
	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Enter a number to search for: ";
	std::cin >> target;

	index = searchArray(arr, size, target);

	if(index != -1){
		std::cout << target << " is at index " << index;
	}
	else {
		std::cout << target << " is not in the array.";
	}

	
}

int searchArray(int arr[],int size, int target) {
	
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			return i;
		}
	}
	return -1;
}