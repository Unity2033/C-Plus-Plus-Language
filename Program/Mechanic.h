#pragma once
#include <iostream>

using namespace std;

class Mechanic
{
private:
	int health;
	int attack;


public:
	Mechanic();
	~Mechanic();

	void Move();
};

