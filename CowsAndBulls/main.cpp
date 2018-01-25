#include <iostream>
#include <string>

//function declaration 
void printIntro();
std::string getGuess();


// the entry point of our application
int main() {
	constexpr int NUMBER_OF_TURNS = 5;

	//introduce the game
	printIntro();

	//getting the guess from the player through the loops
	for (int i = 0; i < NUMBER_OF_TURNS; i++) {
		std::string Guess = getGuess();
		std::cout << "your guess was " << Guess << std::endl;
	}


	return 0;
}

void printIntro() {
	constexpr int WORD_LENGTH = 5;
	std::cout << "hello welcome to cows and bulls game\n";
	std::cout << "can you guess " << WORD_LENGTH << " letter isogram I am thinking right now?\n";
	return;

}

std::string getGuess() {
	std::string Guess = "";
	std::getline(std::cin, Guess);

	return Guess;
}

