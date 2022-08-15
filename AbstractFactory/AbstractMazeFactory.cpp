#include "Door.h"
#include "Room.h"
#include "Maze.h"
#include "Wall.h"

class AbstractMazeFactory
{
public:
	AbstractMazeFactory() {};


	virtual Maze* MakeMaze() const
	{
		return new Maze;
	}

	virtual Door* MakeDoor(const Room* roomOne_in, const Room* roomTwo_in) const
	{
		return new Door(roomOne_in, roomTwo_in);
	}

	virtual Room* MakeRoom(const int identifier_in, const Wall walls_in[4]) const
	{
		return new Room(identifier_in, walls_in);
	}

	virtual Wall* MakeWall() const
	{
		return new Wall;
	}
};