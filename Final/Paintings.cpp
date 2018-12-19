#include "Paintings.h"

//Class portion to show I know how they work

Paintings::Paintings()
{
}

void Paintings::description(string describe)
{
	cout << "\nLooking at this painting evokes a sense of " << describe << endl;
	cout << "in you.\n";
}

void Paintings::letters(string letter)
{
	cout << "\nThis painting also has " << letter << " written in the bottom-left\n";
	cout << "corner of the painting\n\n";
}


Paintings::~Paintings()
{
}