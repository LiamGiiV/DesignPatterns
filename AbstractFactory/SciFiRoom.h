#pragma once

#include "AbstractRoom.h"
#include "CompassDirection.h"
#include "SciFiWall.h"

class SciFiRoom : AbstractRoom
{
public:
	SciFiRoom(const int identifier_in, const SciFiWall walls_in[4]) : identifier{identifier_in}, walls{ walls_in[4]} {};

private:
	const int identifier;
	const SciFiWall walls[4];

	const int getIdentifier() const override
	{
		return identifier;
	}

	const std::string identify() const override
	{
		return std::string("SciFi type room.");
	}

	const AbstractRoom* SetSide(const CompassDirection direction_in) const override
	{
		if (direction_in >= INVALID_COMPASS_DIRECTION)
		{
			return this;
		}
		SciFiWall tempWalls[4] = { walls[0], walls[1], walls[2], walls[3] };
		switch (direction_in)
		{
		case North:
			tempWalls[0] = SciFiWall();
		case East:
			tempWalls[1] = SciFiWall();
		case South:
			tempWalls[2] = SciFiWall();
		case West:
			tempWalls[3] = SciFiWall();
		}
		return new const SciFiRoom(identifier, tempWalls);
	}
};