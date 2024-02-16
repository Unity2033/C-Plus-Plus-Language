#include "Marine.h"

Marine::Marine()
{
	attack = 10;
	health = 45;
	intersection = 15;

	cout << "Create Marine" << endl;
}

Marine::~Marine()
{
	cout << "Release Marine" << endl;
}
