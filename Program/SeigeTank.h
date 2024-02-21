#pragma once
#include "Mechanic.h"

class SeigeTank : public Mechanic
{
public:
	SeigeTank();
	~SeigeTank();

	void Move() override;
};

