#pragma once
#include "Corpse.h"
class Orderly :
	public Corpse
{
public:
	//constructor
	//runs once automatically when you create an object out of the class
	//runs once per object but many times per class
	Orderly();

	void furtherDescription(string furtherDescribe);

	//decontructs to free up memory
	~Orderly();
};

