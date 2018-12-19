#include "Includes.h"
#include "Corpse.h"
#include "Guard.h"
#include "Orderly.h"

void searchBodies()
{
	bool corpseCheck = false; //for repeat until valid response

	do
	{
		system("cls");
		cout << "Which corpse would you like to search? 1, 2, 3, or 4: ";
		userChoice();
		corpseCheck = false;
		if (usersChoice == "ONE" || usersChoice == "1")
		{
			cout << "\nYou examine the corpse closet to the hall.\n";
			Orderly orderly1; //creates the first corpse (orderly)
			orderly1.furtherDescription("Lee");
		}

		else if (usersChoice == "TWO" || usersChoice == "2")
		{
			cout << "\nYou examine the corpse closet to the main desk.\n";
			Orderly orderly2; //creates the second corpse (orderly)
			orderly2.furtherDescription("Stan");
		}

		else if (usersChoice == "THREE" || usersChoice == "3")
		{
			cout << "\nYou see that this corpse is closet to the main door\nso you decide to examine it.";
			
			Guard guard1; //creates the third corpse (guard)
			guard1.setGuardName("Marley");
			guard1.furtherDescription();
			cout << "You're happy that you searched him as you found the\nkeycard you were needing to open the main door.\n\n";
			lobbyDoorway = true;
		}

		else if (usersChoice == "FOUR" || usersChoice == "4")
		{
			cout << "\nYou examine the corpse closet to the chairs.\n";
			Orderly orderly4; //creates the fourth corpse (orderly)
			orderly4.furtherDescription("Bob");
		}

		else //error catcher
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\nInvalid response. Please enter a valid response.\n\n";
			checkAgain = true; //resets current loop for proper guess
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			corpseCheck = true;
			system("pause");
		}
	} while (corpseCheck);
}

void searchRoom()
{
	bool searchCheck = false;

	do
	{
		searchCheck = false;
		cout << "\nWhat would you like to search?\n\n";
		cout << "Chairs, desk, corpses: ";
		userChoice();
		system("cls");

		if (usersChoice == "CHAIRS")
		{
			cout << "You search through all the chairs in the lobby but you\n";
			cout << "find nothing that you can use to get out of this place.\n\n";
		}

		else if (usersChoice == "DESK")
		{
			cout << "You search the desk but all the papers are too damaged\n";
			cout << "for you to read and the computer has no power.\n\n";
		}

		else if (usersChoice == "CORPSES" || usersChoice == "CORPSE")
		{
			searchBodies();
		}

		else //error catcher
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\nInvalid response. Please enter a valid response.\n\n";
			checkAgain = true; //resets current loop for proper guess
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			searchCheck = true;
			system("pause");
			system("cls");
		}
	} while (searchCheck);
}

void lobbyDoor()
{
	bool lobbyCheck = false;

	do
	{
		if (lobbyDoorway == true) //need keycard (lobbyDoorway) to be true to go through the door
		{
			cout << "\nYou hear the door click open... It seems the keycard still works " << name << ".\n";
			cout << "\nYou leave the building and feel nervous. Now that you're out\n";
			cout << "whatever was in the building can get out now as well.\n\n";
			lobbyCheck = false;
			playAgain = true;
		}

		else if (lobbyDoorway == false) //tells you if you have only one key that it's the wrong one
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\nWhen you try to open the door you find that it's locked and there's\n";
			cout << "a keycard slot... You wonder where it is.\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			lobbyCheck = false; 
			checkAgain = true;
			system("pause");
		}

		else //shouldn't hit unless something goes wrong
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\n\nError something went wrong";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			lobbyCheck = true;
			checkAgain = true;
		}

	} while (lobbyCheck);
}