#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(std::string const &name, std::string const &effects)
{
	this->name = name;
	this->effects = effects;
}

ASpell::ASpell(ASpell const &other)
{
	(*this) = other;
}

ASpell &ASpell::operator=(ASpell const &cpy)
{
	this->name = cpy.name;
	this->effects = cpy.effects;
	return *this;
}

ASpell::~ASpell() {}

void	ASpell::launch(ATarget const &atarget_ref) const
{
	atarget_ref.getHitBySpell(*this);
}