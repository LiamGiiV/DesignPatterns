#pragma once

#include <string>

class AbstractWall
{
public:
	virtual ~AbstractWall() {};

	// things that all the walls must implement go here.
	virtual std::string identify() const = 0;
};