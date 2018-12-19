#include "Includes.h"

string userChoice() //small function for user input
{
	usersChoice;	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3); //sets color for text only to aqua
	getline(cin, usersChoice); //gets input from user
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
	for (int i = 0; usersChoice[i] != '\0'; i++) //this loop capitalizes input for decisions.
	{
		usersChoice[i] = toupper(usersChoice[i]);
	}
	return usersChoice;
}