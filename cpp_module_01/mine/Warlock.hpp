#include <string>
#include <iostream>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class	Warlock {
		private:
			std::string	name;
			std::string	title;

			Warlock();
			Warlock(Warlock const &cpy);
			Warlock &operator=(Warlock const &cpy);
	        std::map<std::string, ASpell *> arr;


		public :
			Warlock(std::string const &name, std::string const &title);
			~Warlock();
			std::string const &getName() const {return (this->name);};
			std::string	const &getTitle() const {return (this->title);};
			void	setTitle(std::string const &tit) { this->title = tit;};
			void	introduce() const;

			void	learnSpell(ASpell *aspell_ptr);
			void	forgetSpell(std::string name);
			void	launchSpell(std::string name, ATarget const &atarget_ref);
};