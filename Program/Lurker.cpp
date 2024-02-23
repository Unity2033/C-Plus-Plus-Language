#include "Lurker.h"

Lurker::Lurker()
{
	health = 125;
	maxHP = health;
}

Lurker::~Lurker()
{
	cout << "Release Lurker" << endl;
}

void Lurker::Recovery()
{
	health = maxHP;
}
