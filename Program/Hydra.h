#pragma once
#include "Zerg.h"
class Hydra : public Zerg
{
public:
	Hydra();
	~Hydra();

	virtual void Recovery() override;
};

