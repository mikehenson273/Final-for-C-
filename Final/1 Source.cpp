#include "Includes.h" //for reducing amount of code by having function calls and includes in one area


// global vars (I KNOW  I KNOW. I know I need to keep away from global variables but I couldn't figure out how to use them
// inside of main and then in other source files as it kept throwing "Unresolved External Symbol" errors).
bool playAgain = false;
bool checkAgain = false;
bool deskKey = false;
bool doorCheck = false;
bool hallDoorway = false;
bool lobbyDoorway = false;
bool doorKey = false;
bool isLightOn = false;
bool lightCheck = false;
string name;
string playAgainChoices;
string playAgainChoice();
string userChoice();
string usersChoice;
string WelcomeUser();

extern bool examineCheck; //uses global variable from hallway.cpp

int psuedoLocation = 0;

int main()
{
	

	//makes full screen when activated
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
	
	system("title Mini Escape Puzzle");
	system("color 02"); //changes all console colors
	do //do loop that the main resides in is a play again loop
	{
		//resets booleans at program restart
		playAgain = false;
		checkAgain = false;
		deskKey = false;
		doorCheck = false;
		doorKey = false;
		hallDoorway = false;
		lobbyDoorway = false;
		isLightOn = false;
		lightCheck = false;
		examineCheck = false; //resets the variable in hallway.cpp to false
		psuedoLocation = 0;

		GameEngine();
		goAgain(); //function run for confirmation on playing again
	} while (playAgain);
	return 0;
}