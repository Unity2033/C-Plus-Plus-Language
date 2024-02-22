#pragma once
#include "Mechanic.h"

class Goliath : public Mechanic
{
public :
	Goliath();
	virtual ~Goliath();

	void Move() override;
};

