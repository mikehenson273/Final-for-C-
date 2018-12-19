#pragma once
#include "Corpse.h"

class Guard :
	public Corpse
{
public:
	//constructor
	//runs once automatically when you create an object out of the class
	//runs once per object but many times per class
	Guard();

	void furtherDescription();

	void setGuardName(string newName); //allows naming of guard
	string getGuardName(); //returns the name of the guard


	//decontructs to free up memory
	~Guard();

private:

	string guardName; //keeps guardName from being changed
};

