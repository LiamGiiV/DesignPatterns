//#pragma once
//
//#include "AbstractDoor.h"
//#include "FantasyRoom.h"
//#include "FantasyWall.h"
//
//class FantasyDoor : public AbstractDoor
//{
//public:
//	FantasyDoor(const FantasyRoom* roomOne_in, const FantasyRoom* roomTwo_in, const FantasyWall* wall_in = nullptr, const bool open = false) : roomOne{ roomOne_in }, roomTwo{ roomTwo_in }, wall{ nullptr }, open{ false } {};
//
//	std::string identify() const override
//	{
//		return std::string("Fantasy type door.");
//	}
//
//private:
//	const FantasyRoom* roomOne;
//	const FantasyRoom* roomTwo;
//	const FantasyWall* wall;
//	bool open;
//
//	const AbstractDoor* setWall(AbstractWall* wall_in) const override
//	{
//		const FantasyWall tempWall = FantasyWall();
//		return new const FantasyDoor(roomOne, roomTwo, &tempWall);
//	}
//
//	const AbstractDoor* openDoor() const override
//	{
//		if (open) return this;
//		return new const FantasyDoor(roomOne, roomTwo, wall, true);
//	}
//
//	const AbstractDoor* closeDoor() const override
//	{
//		if (!open) return this;
//		return new const FantasyDoor(roomOne, roomTwo, wall, false);
//	}
//};
