#include "Includes.h"

string WelcomeUser() //function to greet user and explain the situation.
{
	string playersName;
	cout << "Wake up!\n\n";
	cout << "What is your name? "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3); //sets color for text to aqua
	getline(cin, playersName); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
	cout << endl << playersName << ", ok now we got to get going.\n";
	return playersName;
}