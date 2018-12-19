#pragma once
#include <Windows.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;


void bedSearch();
void GameEngine();
void goAgain();
void look();
void openDesk();
void openDoor();
void wait();

void move();

void examinePaintings();
void hallDoor();

void searchBodies();
void searchRoom();
void lobbyDoor();

extern bool checkAgain;
extern bool deskKey;
extern bool doorCheck; //had to add an additional boolean as a check so the program wouldn't freak out
extern bool doorKey;
extern bool hallDoorway;
extern bool lobbyDoorway;
extern bool isLightOn;
extern bool lightCheck;
extern bool playAgain;

extern bool doorKey1; //uses global variable from bedroom.cpp to add an optional query to GameEngine.cpp

extern string name;
extern string playAgainChoices;
extern string playAgainChoice();
extern string userChoice();
extern string usersChoice;
extern string WelcomeUser();

extern int psuedoLocation;