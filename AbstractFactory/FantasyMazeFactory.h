//#pragma once
//
//#include "SciFiDoor.h"
//#include "AbstractMazeFactory.h"
//#include "AbstractRoom.h"
//#include "AbstractWall.h"
//#include "Maze.h"
//
//class SciFiMazeFactory : public AbstractMazeFactory
//{
//public:
//	SciFiMazeFactory() {};
//
//	virtual Maze* MakeMaze() const
//	{
//		return new Maze;
//	}
//
//	virtual AbstractDoor* MakeDoor(const AbstractRoom* roomOne_in, const AbstractRoom* roomTwo_in) const
//	{
//		return new SciFiDoor(roomOne_in, roomTwo_in);
//	}
//
//	virtual AbstractRoom* MakeRoom(const int identifier_in, const AbstractWall walls_in[4]) const
//	{
//		return new AbstractRoom(identifier_in, walls_in);
//	}
//
//	virtual AbstractWall* MakeWall() const
//	{
//		return new AbstractWall;
//	}
//};