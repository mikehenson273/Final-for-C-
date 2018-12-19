#include "Includes.h"

//break into multiple parts for each room
void look()
{
	if (psuedoLocation == 0)
	{
		if (isLightOn == false) //lets you know the light is off
		{
			do
			{
				system("cls");
				cout << "You look around in the darkness. All you can see is a dimly lit LED.\n";
				cout << "Do you want to press the LED Y/N: ";
				userChoice();
				
				if ((usersChoice == "YES") || (usersChoice == "Y")) //lights up room
				{
					cout << "\nYou reach over and turn on the light illuminating the room.\n";
					isLightOn = true;
					checkAgain = false;
					look();
				}

				else if ((usersChoice == "NO") || (usersChoice == "N")) //quits game (yes it is intentional)
				{
					cout << "\nYou roll back into bed and decide to go back to sleep\n";
					cout << "for a while longer\n\n";
					system("pause");
					wait();
					checkAgain = false;
				}

				else //shouldn't hit unless wrong phrasing typed
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
					cout << "\nNot a valid response please enter yes or no!\n\n";
					checkAgain = true;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
					system("pause");
				}
			} while (checkAgain);
		}

		else if (isLightOn == true) //informs you of your surroundings
		{
			cout << "\nYou see that the room is sparse. All that is in it, is\n";
			cout << "the bed you are sleeping on, a desk, and a door.\n\n";
		}

		else //shouldn't hit unless something horrible goes wrong
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\n\nError something went wrong\n";
			system("pause");
		}
	}

	else if (psuedoLocation == 1)
	{
		cout << "\nYou look around and see that the hallway is sparser\n";
		cout << "than the bedroom... the only thing of note are 4 paintings.\n\n";
	}

	else if (psuedoLocation == 2)
	{
		cout << "\nLooking around you see that the lobby seems to have\n";
		cout << "the most things in it, even something that horrifies\n";
		cout << "you. There are several corpses on the ground. You wonder\n";
		cout << "what happened here, however, you feel the need to get out\n";
		cout << "before the same thing happens to you.\n\n";
	}

	else //shouldn't hit unless something horrible goes wrong
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
		cout << "\n\nError something went wrong\n";
		system("pause");
	}
}