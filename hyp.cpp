#include "hyp.h"
#include <cmath>
#include <iostream>

void hypCalc() {
	double a{};
	double b{};

	std::cout << "Enter the triangle base: ";
	std::cin >> a;
	std::cout << "Enter the triangle base: ";
	std::cin >> b;

	a = pow(a, 2);
	b = pow(b, 2);

	std::cout << "The length of the hypotenuse is: " << sqrt(a + b) << " YEP.";

}

//simple program to calculate hypotenuse of a triangle