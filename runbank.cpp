#include "runbank.h"
#include <iostream>

void runBank() {
	double balance = 0;
	int choice = 0;

	do {
		std::cout << "****** BANK ******";
		std::cout << "\nWhat would you like to do today? \n";
		std::cout << "1. Check balance \n2.Deposit \n3. Withdraw \n4. Exit \n";

		std::cin >> choice;
		std::cin.clear();//clears  buffer
		fflush(stdin);//^^^^^



		switch (choice) {
		case 1:
			showBalance(balance);
			break;
		case 2:
			balance += deposit();
			break;
		case 3:
			balance -= withdraw(balance);
			break;
		case 4:
			std::cout << "Thanks for visiting!\n";
			break;
		}

	} while (choice != 4);


}

void showBalance(double balance) {
	std::cout << "Your balance is currently: " << balance << "\n  \n";
}

double deposit() {
	double amount;
	std::cout << "How much would you like to deposit?: ";
	std::cin >> amount;
	return amount;
}

double withdraw(double balance) {
	double amount;
	std::cout << "How much would you like to withdraw?: ";
	std::cin >> amount;
	if (balance - amount >= 0) {
		return amount;
	}
	else if (balance - amount < 0) {
		std::cout << "\n You can't withdraw that much! ";
		return 0;
	}




	return amount;
}