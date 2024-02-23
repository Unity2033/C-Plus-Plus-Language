#include "Zerg.h"

Zerg::Zerg()
{
	cout << "Create Zerg" << endl;
}

Zerg::~Zerg()
{
	cout << "Release Zerg" << endl;
}

int Zerg::GetHP()
{
	return health;
}

void Zerg::SetHP(int health)
{
	this->health = health;
}

void Zerg::Recovery()
{
	cout << "Zerg Recovery" << endl;
}
