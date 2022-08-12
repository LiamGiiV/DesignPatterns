#pragma once

#include "Room.h"

class Door
{
public:
	Door(Room* roomOne_in, Room* roomTwo_in) : roomOne{ roomOne_in }, roomTwo{roomTwo_in} {};
private:
	Room* roomOne;
	Room* roomTwo;
};
