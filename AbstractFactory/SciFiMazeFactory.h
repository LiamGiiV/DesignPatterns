#pragma once

#include "SciFiDoor.h"
#include "AbstractMazeFactory.h"
#include "AbstractRoom.h"
#include "AbstractWall.h"
#include "Maze.h"

class SciFiMazeFactory : public AbstractMazeFactory
{
public:
	SciFiMazeFactory() {};

	const Maze* MakeMaze() const override
	{
		return new Maze;
	}

	const AbstractDoor* MakeDoor(const AbstractRoom* roomOne_in, const AbstractRoom* roomTwo_in) const override
	{
		return new const SciFiDoor(roomOne_in, roomTwo_in);
	}

	const AbstractRoom* MakeRoom(const int identifier_in, const AbstractWall walls_in) const override
	{
		return new AbstractRoom(identifier_in, walls_in);
	}

	virtual AbstractWall* MakeWall() const
	{
		return new AbstractWall;
	}
};