#pragma once
#include "Tools.h"

class State
{
public:
	virtual ~State() = default;

	virtual void Update() = 0;

	virtual void Display() = 0;

private:

};
