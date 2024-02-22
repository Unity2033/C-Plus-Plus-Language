#pragma once
#include "Mechanic.h"

class SeigeTank : public Mechanic
{
public:
	SeigeTank();
	virtual ~SeigeTank();

	void Move() override;
};

