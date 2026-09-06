#include "quizgame.h"
#include <iostream>


void quizGame() {

	std::string questions[] = { "1. What year were you born? ",
								"What month were you born? ",
								"What is the best programming language?  ",
								"Is the Earth flat?" };

	std::string options[][4] = {{	"A. 2005", "B. 2006", "C. 2007", "D. 2008"},
								{	"A. May", "B. June", "C. August","D. January"},
								{	"A. Python", "B. Ada", "C. Java", "D. C++" },
								{	"A. Yes", "B. No", "C. Sometimes", "D. Always"} };

	char answerKey[] = {'B', 'A', 'D', 'A'};

	int size = sizeof(questions) / sizeof(questions[0]);
	char guess;
	int score{};

	for (int i = 0; i < size; i++) {
		std::cout << questions[i] << "\n";
		

		for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
			std::cout << options[i][j] << "\n";
		}
			
		std::cin >> guess;
		guess = toupper(guess);

		if (guess == answerKey[i]) {
			std::cout << "Correct! \n";
			score++;
		}
		else {
			std::cout << "Incorrect. \n";
			std::cout << "Correct Answer: " << answerKey[i] << "\n";
		}

	}
	std::cout << "Results: " << score << "/" << size << "\n";
	std::cout << "Percentage: " << (score /(double)size) * 100 << "%";



}