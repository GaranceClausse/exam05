#pragma once
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
private:
	/* data */
public:
	Fwoosh();
	~Fwoosh();
	virtual ASpell	*clone() const;

};
