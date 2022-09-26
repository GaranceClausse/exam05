#pragma once
#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class	ATarget {
		protected:
			std::string	type;	

		public :
			ATarget(std::string const &type);
			ATarget();
			ATarget(ATarget const &cpy);
			ATarget &operator=(ATarget const &cpy);
			virtual ~ATarget();

			std::string const &getType() const {return (this->type);};

			void	getHitBySpell(ASpell const &aspell_ref) const;

			virtual ATarget	*clone() const = 0;
};