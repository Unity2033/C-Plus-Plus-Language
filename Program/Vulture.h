#pragma once
#include "Mechanic.h"

class Vulture : public Mechanic
{
public:
	Vulture();
	virtual ~Vulture();

	void Move() override;

};

