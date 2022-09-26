#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(std::string const &type)
{
	this->type = type;
}

ATarget::ATarget(ATarget const &other)
{
	(*this) = other;
}

ATarget &ATarget::operator=(ATarget const &cpy)
{
	this->type = cpy.type;
	return *this;
}

ATarget::~ATarget() {}


void	ATarget::getHitBySpell(ASpell const &aspell_ref) const
{
	std::cout << type << " has been " << aspell_ref.getEffects() << "!" << std::endl;
}