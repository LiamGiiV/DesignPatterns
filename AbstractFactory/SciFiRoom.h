#pragma once

#include "AbstractRoom.h"
#include "CompassDirection.h"
#include "SciFiWall.h"

class SciFiRoom : AbstractRoom
{
public:
	SciFiRoom(const int identifier_in, const SciFiWall walls_in[4]) : identifier{identifier_in}, walls{ walls_in[4]} {};

	const int getIdentifier()
	{
		return identifier;
	}

	const SciFiRoom SetSide(CompassDirection direction_in)
	{
		if (direction_in >= INVALID_COMPASS_DIRECTION)
		{
			return *this;
		}
		SciFiWall tempWalls[4] = {walls[0], walls[1], walls[2], walls[3] };
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
		const SciFiRoom result = SciFiRoom(identifier, tempWalls);
		return result;
	}

	const std::string identify() const override
	{
		return std::string("SciFi type room.");
	}

private:
	const int identifier;
	const SciFiWall walls[4];
};