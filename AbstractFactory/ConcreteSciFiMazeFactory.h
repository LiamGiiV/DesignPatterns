#pragma once
#include "Maze.h"

class ConcreteSciFiMazeFactory
{
public:
	ConcreteSciFiMazeFactory() {};

	Maze* MakeMaze() { return new Maze; };
};