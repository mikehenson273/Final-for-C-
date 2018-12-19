#include "Includes.h"

// A psuedo-load screen
void wait()
{
	for (int a = 0; a < 3; ++a)
	{
		system("cls");
		for (int b = 0; b < 6; ++b)
		{
			Sleep(250);
			cout << ". ";
		}
	}
	cout << "\n\n";
}
