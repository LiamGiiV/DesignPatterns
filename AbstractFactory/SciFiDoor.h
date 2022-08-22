#pragma once

#include "AbstractDoor.h"
#include "SciFiRoom.h"
#include "SciFiWall.h"

class SciFiDoor : public AbstractDoor
{
public:
	SciFiDoor(const SciFiRoom* roomOne_in, const SciFiRoom* roomTwo_in, const SciFiWall* wall_in = nullptr, const bool open = false) : roomOne{ roomOne_in }, roomTwo{ roomTwo_in }, wall { nullptr }, open{false} {};

	std::string identify() const override
	{
		return std::string("SciFi type door.");
	}

private:
	const SciFiRoom* roomOne;
	const SciFiRoom* roomTwo;
	const SciFiWall* wall;
	bool open;

	const AbstractDoor* setWall(AbstractWall* wall_in) const override
	{
		const SciFiWall tempWall = SciFiWall();
		return new const SciFiDoor(roomOne, roomTwo, &tempWall);
	}

	const AbstractDoor* openDoor()
	{
		if (open) return this;
		return new const SciFiDoor(roomOne, roomTwo, wall, true);
	}

	const AbstractDoor* closeDoor()
	{
		if (!open) return this;
		return new const SciFiDoor(roomOne, roomTwo, wall, false);
	}
};
