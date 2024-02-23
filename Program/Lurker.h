#pragma once
#include "Zerg.h"
class Lurker : public Zerg
{
public:
	Lurker();
	~Lurker();

	virtual void Recovery() override;
};

