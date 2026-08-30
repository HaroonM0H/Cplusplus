#include "io.h"
#include <iostream>

int readNumber() {
	int x{};
	std::cout << "Enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int a) {
	std::cout << a;
}