#include "creditvalidator.h"
#include <iostream>


int creditValidator() {

	std::string cardNumber;
	int result = 0;

	result = sumOddDigits() + sumEvenDigits();

	if (result % 10 == 0) {
		std::cout << "Your card is valid";
	} else {
		std::cout << "Your card is invalid";
	}

	return 0;
}


int getDigit(const int number) {

	return number % 10 + (number / 10 % 10);
}


int sumOddDigits(const std::string cardNumber) {

	int sum = 0;

	for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
		sum += cardNumber[i] - '0';
	}

	return sum;
}


int sumEvenDigits(const std::string cardNumber) {
	
	int sum = 0;

	for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
		sum += getDigit((cardNumber[i] - '0') * 2);
	}
	
	return sum;
}
