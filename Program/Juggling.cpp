#include "Juggling.h"

Juggling::Juggling()
{
	health = 35;
	maxHP = health;
}

Juggling::~Juggling()
{
	cout << "Release Juggling" << endl;
}

void Juggling::Recovery()
{
	health = maxHP;
}
