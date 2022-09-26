#pragma once

#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
	Dummy(/* args */);
	~Dummy();

	ATarget *clone() const;
};

