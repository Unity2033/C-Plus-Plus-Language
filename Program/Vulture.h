#pragma once
#include "Mechanic.h"

class Vulture : public Mechanic
{
public:
	Vulture();
	~Vulture();

	void Move() override;

};

