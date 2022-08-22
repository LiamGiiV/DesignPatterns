#pragma once

#include <string>
#include"AbstractWall.h"

class SciFiWall : public AbstractWall
{
public:
	SciFiWall() {};
	// unique implementations of SciFall walls go here.
	std::string identify() const override
	{
		return std::string("SciFi type wall.");
	}
};