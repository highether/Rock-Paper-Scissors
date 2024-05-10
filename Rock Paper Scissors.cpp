#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

//Creating a enumeration type for rock, paper, scissors game
enum Choise
{
	rock, //= 0
	paper, //= 1
	scissors, //= 2
	none //= 3
};

int main() {
	//Putting a seed of the current time into a random number generator
	srand(time(NULL));

	string userInput;
	Choise userChoise = none;
	Choise randomChoise = none;

	cout << "Enter your choise:\n";
	cin >> userInput;


	//1. User entering rock, paper, scissors text input
	//2. If input is correct assigning the userChoise variable a corresponding value (R, P, or S), if not - printing an error output to console
	if (userInput == "Rock" || userInput == "Paper" || userInput == "Scissors") {
		cout << "Correct data!\n";

		if ("Rock" == userInput) {
			userChoise = rock;
		}
		else if ("Paper" == userInput) {
			userChoise = paper;
		}
		else {
			userChoise == scissors;
		}

	}
	else {
		cout << "Incorrect data!";
		return 1;
	}


	//Grabbing a number from RNG, modulo it by 3 and choosing a R(0), P(1), or S(2) depending on the answer
	int randomNumber = rand() % 3;

	switch (randomNumber) {
	case 0:
		randomChoise = rock;
		break;
	case 1:
		randomChoise = paper;
		break;
	case 2:
		randomChoise = scissors;
		break;
	default:
		break;
	}

	//Comparing player's input and RNG-generated number to determine winner!
	if (userChoise == rock && randomChoise == rock) {

		cout << "Rock + Rock = Tie!";
	}
	else if (userChoise == rock && randomChoise == paper) {
		cout << "Rock + Paper = Paper wins!";
	}
	else if (userChoise == rock && randomChoise == scissors) {
		cout << "Rock + Scissors = Rock wins!";
	}
	else if (userChoise == paper && randomChoise == rock) {
		cout << "Paper + Rock = Paper wins!";
	}
	else if (userChoise == paper && randomChoise == paper) {
		cout << "Paper + Paper = Tie!";
	}
	else if (userChoise == paper && randomChoise == scissors) {
		cout << "Paper + Scissors = Scissors wins!";
	}
	else if (userChoise == scissors && randomChoise == rock) {
		cout << "Scissors + Rock = Rock wins!";
	}
	else if (userChoise == scissors && randomChoise == paper) {
		cout << "Scissors + Paper = Scissors wins!";
	}
	else if (userChoise == scissors && randomChoise == scissors) {
		cout << "Scissors + Scissors = Tie!";
	}

	return 0;
}