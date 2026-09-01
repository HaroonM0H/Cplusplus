#include <iostream>

// easier to read than if statements
int main() {
	int month;
	std::cout << "Enter a number: ";
	std::cin >> month;

	switch (month) {
	case 1:
		std::cout << "It is Jan";
		break;
	case 2:
		std::cout << "It is feb";
		break;

	default:
		std::cout << "only a number between 1-12";
	}
	
}
