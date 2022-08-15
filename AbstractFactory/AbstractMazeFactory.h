#pragma once

#include "Door.h"
#include "Room.h"
#include "Maze.h"
#include "Wall.h"

class AbstractMazeFactory
{
public:
	AbstractMazeFactory() {};

	virtual Maze* MakeMaze() const;

	virtual Door* MakeDoor(Room* roomOne_in, Room* roomTwo_in) const;

	virtual Room* MakeRoom(int identifier_in) const;

	virtual Wall* MakeWall() const;
};
