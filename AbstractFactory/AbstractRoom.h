#pragma once

#include <string>
#include "CompassDirection.h"

class AbstractRoom
{
public:
	virtual ~AbstractRoom() {};

	// things that all rooms must implement go here:
private:
	virtual const std::string identify() const = 0;
	virtual const int getIdentifier() const = 0;
	virtual const AbstractRoom* SetSide(const CompassDirection direction_in) const = 0;
};