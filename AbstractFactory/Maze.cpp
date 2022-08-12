#include "ConcreteMazeFactory.h"

Maze* CreateMaze(ConcreteMazeFactory& factory)
{
	Maze* aMaze = factory.MakeMaze();
	Room* r1 = factory.MakeRoom(1);
	Room* r2 = factory.MakeRoom(2);
	Door* aDoor = factory.MakeDoor(r1, r2);

	aMaze->AddRoom(r1);
	aMaze->AddRoom(r2);

	r1->SetSide(North, factory.MakeWall());
	r1->SetSide(East, aDoor);
	r1->SetSide(South, factory.MakeWall());
	r1->SetSide(West, factory.MakeWall());

	r1->SetSide(North, factory.MakeWall());
	r1->SetSide(East, factory.MakeWall());
	r1->SetSide(South, factory.MakeWall());
	r1->SetSide(West, aDoor);

	return aMaze;
}