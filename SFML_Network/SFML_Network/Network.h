#pragma once
#include "State.h"

class Network : public State
{
public:
	Network();
	~Network();

	virtual void Update() override;

	virtual void Display() override;

private:

};
