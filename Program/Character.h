#pragma once
#include <iostream>

class Character
{
private:
	int money = 30000;

	friend class Bank;

public:
	void Show();

};

