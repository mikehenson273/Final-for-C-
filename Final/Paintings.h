#pragma once
#include "Includes.h"

class Paintings
{
public:
	//constructor
	//runs once automatically when you create an object out of the class
	//runs once per object but many times per class
	Paintings();
	void letters(string letter);
	void description(string describe);

	//decontructs to free up memory
	~Paintings();
};
