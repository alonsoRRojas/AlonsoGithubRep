#include <iostream>
#include "Powerup.h"

Powerup::Powerup(int x, int y)
	: PlacableActor(x, y)
{

}
void Powerup::Draw()
{
	std::cout << "P";
}