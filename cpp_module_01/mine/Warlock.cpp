#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
	this->name = name;
	this->title =title;
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell * spell_ptr)
{
	if (spell_ptr)
		arr.insert(std::pair<std::string, ASpell *>(spell_ptr->getName(), spell_ptr->clone()));
}