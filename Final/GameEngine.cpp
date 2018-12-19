#include "Includes.h"


//set up multiple areas
void GameEngine()
{
	name = WelcomeUser();
	cout << endl;

	do
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
		system("pause");
		system("cls");

		if (psuedoLocation == 0)
		{
			if (isLightOn == false)
			{
				cout << "You wake up in a dark room. You should probably look around " << name << ".\n";
			}

			else if (doorKey1 == true)
			{
				cout << "Look, Open, Move to a different room: ";
			}

			else if (isLightOn == true)
			{
				cout << "Look and open: ";
			}

			userChoice();

			if (usersChoice == "LOOK" || usersChoice == "LOOK AROUND")
			{
				look();
				checkAgain = true;
			}
			
			else if (usersChoice == "SEARCH BED")
			{
				bedSearch();
				checkAgain = true;
			}
			
			else if (usersChoice == "OPEN DESK" || usersChoice == "SEARCH DESK")
			{
				openDesk();
				checkAgain = true;
			}
			
			else if (usersChoice == "OPEN DOOR" || usersChoice == "TRY DOOR")
			{
				openDoor();
				checkAgain = true;
			}
			
			else if (usersChoice == "MOVE" || usersChoice == "SWITCH ROOMS")
			{
				move();
				checkAgain = true;
			}

			//for ending the game... added the fuck off bit cuz i was bored
			else if (usersChoice == "QUIT")
			{
				cout << "\nOh... Ok. Bye " << name << ".\n";
				checkAgain = false;
			}
			
			else if (usersChoice == "FUCK OFF")
			{
				cout << "\nWell that was uncalled for.... Good Bye " << name << "!\n";
				cout << "Also ";
				checkAgain = false;
			}

			else //informs user that their choice was invalid
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
				cout << endl << name << ", I am sorry I do not understand your command\n\n";
				checkAgain = true;
			}
		}

		else if (psuedoLocation == 1)
		{
			cout << "Look, Examine Paintings, Open Door, or Move to a different room: ";
			userChoice();

			if (usersChoice == "LOOK" || usersChoice == "LOOK AROUND")
			{
				look();
				checkAgain = true;
			}

			else if (usersChoice == "EXAMINE PAINTINGS" || usersChoice == "EXAMINE")
			{
				examinePaintings();
				checkAgain = true;
			}

			else if (usersChoice == "OPEN DOOR" || usersChoice == "TRY DOOR")
			{
				hallDoor();
				checkAgain = true;
			}

			else if (usersChoice == "MOVE" || usersChoice == "SWITCH ROOMS")
			{
				move();
			}

			//for ending the game... added the fuck off bit cuz i was bored
			else if (usersChoice == "QUIT")
			{
				cout << "\nOh... Ok. Bye " << name << ".\n";
				checkAgain = false;
			}
			else if (usersChoice == "FUCK OFF")
			{
				cout << "\nWell that was uncalled for.... Good Bye " << name << "!\n";
				cout << "Also ";
				checkAgain = false;
			}

			else //informs user that their choice was invalid
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
				cout << "\n" << name << ", I am sorry I do not understand your command\n\n";
				checkAgain = true;
			}
		}

		else if (psuedoLocation == 2)
		{
			cout << "Look, Search, Open Door, or Move to a different room: ";
			userChoice();

			if (usersChoice == "LOOK" || usersChoice == "LOOK AROUND")
			{
				look();
				checkAgain = true;
			}

			else if (usersChoice == "SEARCH")
			{
				searchRoom();
				checkAgain = true;
			}

			else if (usersChoice == "OPEN DOOR" || usersChoice == "TRY DOOR")
			{
				lobbyDoor();
				checkAgain = false;
			}

			else if (usersChoice == "MOVE" || usersChoice == "SWITCH ROOMS")
			{
				move();
			}

			//for ending the game... added the fuck off bit cuz i was bored
			else if (usersChoice == "QUIT")
			{
				cout << "\nOh... Ok. Bye " << name << ".\n";
				checkAgain = false;
			}
			else if (usersChoice == "FUCK OFF")
			{
				cout << "\nWell that was uncalled for.... Good Bye " << name << "!\n";
				cout << "Also ";
				checkAgain = false;
			}

			else //informs user that their choice was invalid
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
				cout << "\n" << name << ", I am sorry I do not understand your command\n\n";
				checkAgain = true;
			}
		}

		else //informs user that their choice was invalid
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\n" << name << ", I am sorry I do not understand your command\n\n";
			checkAgain = true;
		}
	} while (checkAgain);
}