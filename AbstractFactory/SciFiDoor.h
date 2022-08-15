#pragma once

#include "SciFiRoom.h"

class SciFiDoor : public AbstractDoor
{
public:
	SciFiDoor(Room* roomOne_in, Room* roomTwo_in) : roomOne{ roomOne_in }, roomTwo{ roomTwo_in }, open{ false } {};
private:
	Room* roomOne;
	Room* roomTwo;
	bool open;
};
