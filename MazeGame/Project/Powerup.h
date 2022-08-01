#pragma once
#include "PlacableActor.h"

class Powerup : public PlacableActor
{
public:
	Powerup(int x, int y);

	virtual ActorType GetType() override { return ActorType::Money; }
	virtual void Draw() override;
};

