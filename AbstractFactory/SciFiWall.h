#pragma once

#include <string>
#include"AbstractWall.h"

class SciFiWall : public AbstractWall
{
public:
	SciFiWall() {};
	// unique implementations of SciFall walls go here.
	const std::string identify() const override
	{
		return const std::string("SciFi type wall.");
	}
};