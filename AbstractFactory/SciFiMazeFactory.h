#pragma once

#include "SciFiDoor.h"
#include "AbstractMazeFactory.h"
#include "AbstractRoom.h"
#include "AbstractWall.h"

// concrete implementation of AbstractFactory
class SciFiMazeFactory : public AbstractMazeFactory
{
public:
	SciFiMazeFactory() {};

private:
	const AbstractDoor* MakeDoor(const AbstractRoom* roomOne_in, const AbstractRoom* roomTwo_in) const
	{

	}

};