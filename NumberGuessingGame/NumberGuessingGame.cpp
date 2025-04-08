// NumberGuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <random>
using namespace std;

int main()
{
	int numberOfGuesses = 3;
	cout << "Hello World" << endl;
	random_device rd;
	mt19937 gen(rd());		
	uniform_int_distribution<> distrib(1, 100);

	int randomNumber = distrib(gen);

	while (numberOfGuesses > 0)
	{
		
		int guessedNumber;
		cin >> guessedNumber;
		cout << guessedNumber << endl;

		if (guessedNumber == randomNumber)
		{
			cout << "You were correct, congratulations" << endl;
			numberOfGuesses = 0;
		}
		else
		{
			numberOfGuesses--;
			cout << "I'm sorry, that's not right, you have " << numberOfGuesses << " guesses left." << endl;
		}
	}
	cout << "Thank you for playing";
}