#include"Includes.h"

void goAgain() // Replay Loop Confirmation
{
	if (playAgain == true) //triggers this if playAgain is true when reaching the loop
	{
		do
		{
			cout << "Want to go Again Y/N: ";
			userChoice();

			if (usersChoice == "YES" || usersChoice == "Y")
			{
				playAgain = true; //replay program
				checkAgain = false; //leave current loop
				system("cls"); //clears console for new playthrough
			}
			else if (usersChoice == "NO" || usersChoice == "N")
			{
				cout << "\nThanks for playing. Please come again " << name << ".\n\n";
				playAgain = false; //leave program altogether
				checkAgain = false; //leaves this loop
				system("pause");
			}
			else //error catcher
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
				cout << "\nInvalid response. Please enter a valid response.\n";
				checkAgain = true; //resets current loop for proper guess
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			}
		} while (checkAgain); //boolean for this do while loop
	}

	else if (playAgain == false) //triggered if playAgain is false when reaching this loop
	{
		cout << "\nThanks for playing.\n\n";
		system("pause");
	}
}