#pragma once

#include "AbstractDoor.h"
#include "AbstractRoom.h"
#include "Maze.h"
#include "AbstractWall.h"

class AbstractMazeFactory
{
public:
	AbstractMazeFactory() {};

	virtual Maze* MakeMaze() const = 0;

	virtual AbstractDoor* MakeDoor() const = 0;

	virtual AbstractRoom* MakeRoom(int identifier_in) const = 0;

	virtual AbstractWall* MakeWall() const = 0;
};
