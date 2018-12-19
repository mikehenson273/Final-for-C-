#include "Includes.h"
#include "Paintings.h"

bool examineCheck = false; //global boolean meant just for this function

void examinePaintings()
{
	bool paintCheck = false; //for repeat until valid response

	examineCheck = true;

	do
	{
		system("cls");
		cout << "Which painting Would you like to examine? 1, 2, 3, or 4: ";
		userChoice();
		paintCheck = false;
		if (usersChoice == "ONE" || usersChoice == "1")
		{
			Paintings Painting1; //creates the first clue
			Painting1.description("serenity");
			Painting1.letters("an A");
		}

		else if (usersChoice == "TWO" || usersChoice == "2")
		{
			Paintings Painting2; //creates the second clue
			Painting2.description("fear");
			Painting2.letters("an E");
		}

		else if (usersChoice == "THREE" || usersChoice == "3")
		{
			Paintings Painting3; //creates the third clue
			Painting3.description("rage");
			Painting3.letters("a F");
		}

		else if (usersChoice == "FOUR" || usersChoice == "4")
		{
			Paintings Painting4; //creates the fourth clue
			Painting4.description("joy");
			Painting4.letters("a K");
		}

		else //error catcher
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\nInvalid response. Please enter a valid response.\n\n";
			checkAgain = true; //resets current loop for proper guess
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			paintCheck = true;
			system("pause");
		}
	} while (paintCheck);
}

void hallDoor()
{
	bool hallCheck = false;
	
	do
	{

		if (examineCheck == false)
		{
			cout << "\nAs you examine the door you see a keypad and you wonder what the code is\n";
			cout << "Out of curiosity you punch in a code: ";
		}

		else if (examineCheck == true)
		{
			cout << "\nRemembering there were letters on the paintings you\n";
			cout << "wonder if they have anything to do with the keypad.\n";
			cout << "You try using the keypad: ";
		}

		userChoice();

		if (usersChoice == "FAKE") //correct code to get through
		{
			cout << "\nYou hear the door click open... It seems the code worked.\n";
			cout << "You head to the next room to be met with a grizzly site\n\n";
			hallCheck = false;
			checkAgain = true;
			hallDoorway = true;
			++psuedoLocation;
		}

		else if (usersChoice != "FAKE") //tells you if you entered the wrong code
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\nWhen you punch in the code and try to open the door you discover\n";
			cout << "that it's still locked. You wonder what the real code could be.\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			hallCheck = false;
			checkAgain = true;
		}

		else //shouldn't hit unless something goes wrong
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "\n\nError something went wrong";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text back to green
			hallCheck = true;
			checkAgain = true;
		}

	} while (hallCheck);
}
