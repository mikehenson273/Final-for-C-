#pragma once
#include "Includes.h"

class Corpse
{
public:
	//constructor
	//runs once automatically when you create an object out of the class
	//runs once per object but many times per class
	Corpse();
	void description(string describe);

	//decontructs to free up memory
	~Corpse();
};

