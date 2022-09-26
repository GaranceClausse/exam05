#pragma once
#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class	ASpell {
		protected:
			std::string	name;
			std::string	effects;

			

		public :
			ASpell(std::string const &name, std::string const &effects);
			ASpell();
			ASpell(ASpell const &cpy);
			ASpell &operator=(ASpell const &cpy);
			virtual ~ASpell();

			std::string const &getName() const {return (this->name);};
			std::string	const &getEffects() const {return (this->effects);};

			void	launch(ATarget const &atarget_ref) const;

			virtual ASpell	*clone() const = 0;
};