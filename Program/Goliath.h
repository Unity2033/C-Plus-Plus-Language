#pragma once
#include "Mechanic.h"

class Goliath : public Mechanic
{
public :
	Goliath();
	~Goliath();

	void Move() override;
};

