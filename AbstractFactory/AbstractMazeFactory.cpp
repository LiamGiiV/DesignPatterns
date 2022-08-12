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

	virtual Door* MakeDoor(Room* roomOne_in, Room* roomTwo_in) const
	{
		return new Door(roomOne_in, roomTwo_in);
	}

	virtual Room* MakeRoom(int identifier_in) const
	{
		return new Room(identifier_in);
	}

	virtual Wall* MakeWall() const
	{
		return new Wall;
	}
};