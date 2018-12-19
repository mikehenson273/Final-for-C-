#include "Includes.h"

void move()
{
	bool moveCheck = false;
	do
	{
		system("cls");

		if (doorKey == true && hallDoorway == true)
		{
			cout << "Which room would you like to go to " << name << endl;

			if (psuedoLocation == 0)
			{
				cout << "Hall or Lobby: ";
				userChoice();
				
				if (usersChoice == "HALLWAY" || usersChoice == "HALL")
				{
					cout << "\nYou walk towards the hallway\n\n";
					++psuedoLocation;
					moveCheck = false;
					
				}
				
				else if (usersChoice == "LOBBY")
				{
					cout << "\nYou walk through the hallway towards the hallway.\n\n";
					psuedoLocation = 2;
					moveCheck = false;
					
				}
				
				else if (usersChoice == "BEDROOM")
				{
					cout << "\nYou're already in the bedroom.\n\n";
					moveCheck = false;
					
				}
				
				else
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
					cout << "\nError something went wrong\n"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text to green
					moveCheck = true;
					system("pause");
				}
			}

			else if (psuedoLocation == 1)
			{
				cout << "Bedroom or Lobby: ";
				userChoice();
				
				if (usersChoice == "HALLWAY" || usersChoice == "HALL")
				{
					cout << "\nYou're already in the hallway.\n\n";
					moveCheck = false;
					
				}
				
				else if (usersChoice == "LOBBY")
				{
					cout << "\nYou walk towards the lobby.\n\n";
					++psuedoLocation;
					moveCheck = false;
					
				}
				
				else if (usersChoice == "BEDROOM")
				{
					cout << "\nYou walk back towards the bedroom.\n\n";
					--psuedoLocation;
					moveCheck = false;
					
				}
				
				else
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
					cout << "\nError something went wrong\n"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text to green
					moveCheck = true;
					system("pause");
				}
			}

			else if (psuedoLocation == 2)
			{
				cout << "Bedroom or Hall: ";
				userChoice();
				
				if (usersChoice == "HALLWAY" || usersChoice == "HALL")
				{
					cout << "\nYou walk back towards the hallway.\n\n";
					--psuedoLocation;
					moveCheck = false;
					
				}
				
				else if (usersChoice == "LOBBY")
				{
					cout << "\nYou're already in the lobby.\n\n";
					moveCheck = false;
					
				}
				
				else if (usersChoice == "BEDROOM")
				{
					cout << "\nYou go through the hallway towards the bedroom.\n\n";
					psuedoLocation = 0;
					moveCheck = false;
					
				}
				
				else
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
					cout << "\nError something went wrong\n"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text to green
					moveCheck = true;
					system("pause");
				}
			}
		}

		else if (doorKey == true)
		{

			if (psuedoLocation == 0)
			{
				cout << "Would you like to go to the hall? Y/N: ";
				userChoice();

				if (usersChoice == "YES" || usersChoice == "Y")
				{
					cout << "\nYou head to the hall.\n\n";
					++psuedoLocation;
					moveCheck = false;
					
				}
				
				else if (usersChoice == "NO" || usersChoice == "N")
				{
					cout << "\nYou stay in the bedroom.\n\n";
					moveCheck = false;
					
				}
				
				else
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
					cout << "\nError something went wrong\n\n"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text to green
					moveCheck = true;
					system("pause");
				}
			}

			else if (psuedoLocation == 1)
			{
				cout << "Would you like to go back to the bedroom? Y/N: ";
				userChoice();
				
				if (usersChoice == "NO" || usersChoice == "N")
				{
					cout << "\nYou stay in the hallway.\n\n";
					moveCheck = false;
					
				}
				
				else if (usersChoice == "Yes" || usersChoice == "Y")
				{
					cout << "\nYou walk back towards the bedroom.\n\n";
					--psuedoLocation;
					moveCheck = false;
					
				}
				
				else
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
					cout << "\nError something went wrong\n\n"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text to green
					moveCheck = true;
					system("pause");
				}
			}
		}

		else
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //sets color for text to red
			cout << "Error something went wrong\n\n"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); //sets color for text to green
			//moveCheck = true;
		}
		
	} while (moveCheck);
}