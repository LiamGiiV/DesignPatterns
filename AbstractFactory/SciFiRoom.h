#pragma once

#include "AbstractRoom.h"
#include "CompassDirection.h"
#include "SciFiWall.h"

class SciFiRoom : AbstractRoom
{
public:
	SciFiRoom(int identifier_in, const Wall[4]) : identifier{identifier_in}, walls{} {};
	const int getIdentifier()
	{
		return identifier;
	}
	const SciFiRoom SetSide(CompassDirection direction_in, Wall (*makeWall)())
	{
		if (direction_in >= INVALID_COMPASS_DIRECTION)
		{
			const Room result = Room(identifier, walls);
			return result;
		}
		Wall tempWalls[4] = {walls[0], walls[1], walls[2], walls[3] };
		switch (direction_in)
		{
		case North:
			tempWalls[0] = makeWall();
		case East:
			tempWalls[1] = makeWall();
		case South:
			tempWalls[2] = makeWall();
		case West:
			tempWalls[3] = makeWall();
		}
		const Room result = Room(identifier, tempWalls);
		return result;
	}
private:
	const int identifier;
	const Wall walls[4];
};