#include "switcher.h"
#include <iostream>

// easier to read than if statements
void switchCaseExample() {
	int month;
	std::cout << "Enter a number: ";
	std::cin >> month;

	switch (month) {
	case 1:
		std::cout << "It is Jan\n";
		break;
	case 2:
		std::cout << "It is feb\n";
		break;
		// add in more cases for other months
	default:
		std::cout << "only a number between 1-12";
	}

	//ternary operator
	month <= 1 ? std::cout << "the month is jan or below" : std::cout << "the month is feb or above";

	
}

