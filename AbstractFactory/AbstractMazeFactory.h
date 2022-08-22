#pragma once

#include "AbstractDoor.h"
#include "AbstractRoom.h"
#include "AbstractWall.h"

class AbstractMazeFactory
{
public:
	AbstractMazeFactory() {};

private:
	virtual const AbstractDoor* MakeDoor(const AbstractRoom* roomOne_in, const AbstractRoom* roomTwo_in) const = 0;

	virtual const AbstractRoom* MakeRoom(const int identifier_in, const AbstractWall walls_in[4]) const = 0;

	virtual const AbstractWall* MakeWall() const = 0;
};
