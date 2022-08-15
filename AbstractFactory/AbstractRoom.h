#pragma once

#include <string>

class AbstractRoom
{
public:
	virtual ~AbstractRoom() {};

	// things that all rooms must implement go here:
	virtual std::string identify() const = 0;
};