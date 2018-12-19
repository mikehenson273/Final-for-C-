#include "Orderly.h"



Orderly::Orderly()
{
}

void Orderly::furtherDescription(string furtherDescribe)
{
	cout << "\nAs you look at this corpse you see that it's wearing white scrubs.\n";
	cout << "You can see that it was an orderly and it seems to have experienced\n";
	cout << "some significant trauma. You take a closer look and see a name tag\n";
	cout << "with the name " << furtherDescribe << ".\n\n";
}

Orderly::~Orderly()
{
}
