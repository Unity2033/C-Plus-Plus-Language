#pragma once
#include <iostream>

using namespace std;

class Zerg
{
protected:
	int maxHP;
	int health;
public:
	Zerg();
	~Zerg();

	int GetHP();
	void SetHP(int health);

	virtual void Recovery();
};

