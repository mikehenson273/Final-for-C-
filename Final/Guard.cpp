#include "Guard.h"



Guard::Guard()
{
}

void Guard::setGuardName(string newName) //allows naming of guard
{
	guardName = newName;

}

string Guard::getGuardName() //returns guardName
{
	return guardName;
}

void Guard::furtherDescription()
{
	cout << "\nAs you look at this corpse you see a uniform showing that it's a guard.\n";
	cout << "It seems that this unfortunate soul took the worst of the attack.\n";
	cout << "You take a second to look at his name tag and see that it says " << guardName << ".\n\n";
}


Guard::~Guard()
{
}
