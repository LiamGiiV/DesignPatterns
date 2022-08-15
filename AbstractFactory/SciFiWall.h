#pragma once

#include <string>
#include"AbstractWall.h"

class SciWall : public AbstractWall
{
public:
	SciWall() {};
	// unique implementations of SciFall walls go here.
	std::string identify()
	{
		return std::string("SciFi type wall.");
	}
};