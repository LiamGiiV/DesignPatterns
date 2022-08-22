#pragma once

class AbstractDoor
{
public:
	virtual ~AbstractDoor() {};

	// things that all doors must implement go below:
	virtual std::string identify() const = 0;

private:
	virtual const AbstractDoor* setWall(AbstractWall* wall_in) const = 0;
	virtual const AbstractDoor* openDoor() const = 0;
	virtual const AbstractDoor* closeDoor() const = 0;
};