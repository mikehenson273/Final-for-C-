#include "Includes.h"

bool doorKey1 = false;

void bedSearch()
{
	do
	{
		if (isLightOn == false) //won't let you search if the light is off
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\nWithout a light you can't really search. You give up in the meantime.\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			checkAgain = false;
		}

		else if (deskKey == true) //only does this if you already have desk key
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\nYou've already searched this area\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			checkAgain = false;
		}

		else if (isLightOn == true) //only lets you search bed if the light is on
		{
			wait();
			cout << "With the light on you find it easier to search.\n";
			cout << "After rummaging through the bed and flipping it\n";
			cout << "you find a key... you wonder what it goes to.\n\n";
			deskKey = true;
			checkAgain = false;
		}

		else //shouldn't hit unless something goes wrong
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\n\nError something went wrong";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			checkAgain = true;
		}
	} while (checkAgain);
}

void openDesk()
{
	do
	{
		if (isLightOn == false && deskKey == false) //won't let you search if the light is off
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\nWithout a light you can't really search. You give up in the meantime.\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			checkAgain = false;
		}

		else if (doorKey == true) //only does this if you already have door key
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\nYou've already searched this area\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			checkAgain = false;
		}

		else if (isLightOn == true && deskKey == false) //informs you that you're missing the key
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\nUpon searching you discover the desk is locked. You wonder where\n";
			cout << "the key could possibly be.\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			checkAgain = false;
		}

		else if (isLightOn == true && deskKey == true) //only lets you search desk if the light is on and key is found
		{
			wait();
			cout << "With the light on you find it easier to search.\n";
			cout << "After rummaging through the desk and searching through\n";
			cout << "you find another key... you bet it goes to the door.\n\n";
			doorKey = true;
			checkAgain = false;
		}

		else //shouldn't hit unless something goes wrong
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\n\nError something went wrong";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			checkAgain = true;
		}
	} while (checkAgain);
}

void openDoor()
{
	do
	{
		if (isLightOn == false && doorKey == false) //won't let you search if the light is off
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\nWithout a light you can't really search. You give up in the meantime.\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			doorCheck = false;
			checkAgain = true;
		}

		else if (isLightOn == true && doorKey == false && deskKey == true) //tells you if you have only one key that it's the wrong one
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\nWhen you use the key to try to open the door you discover\n";
			cout << "that it's still locked. You wonder where the real key could be.\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			doorCheck = false;
			checkAgain = true;
		}

		else if (isLightOn == true && doorKey == false) //lets you know you can't open door
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\nWhen you try to open the door you discover that it's\n";
			cout << "locked. You wonder where the key could be.\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			doorCheck = false;
			checkAgain = true;
		}

		else if (isLightOn == true && doorKey == true) //only lets you open door if the light is on and key is found
		{
			wait();
			cout << "You've opened the door and you see a hall in front of you " << name << "\n\n";
			doorCheck = false;
			checkAgain = true;
			doorKey1 = true;
			++psuedoLocation;
		}

		else //shouldn't hit unless something goes wrong
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\n\nError something went wrong";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			doorCheck = true;
			checkAgain = true;
		}
	} while (doorCheck);
}