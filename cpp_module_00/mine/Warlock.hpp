#include <string>
#include <iostream>

class	Warlock {
		private:
			std::string	name;
			std::string	title;

			Warlock();
			Warlock(Warlock const &cpy);
			Warlock &operator=(Warlock const &cpy);

		public :
			Warlock(std::string const &name, std::string const &title);
			~Warlock();
			std::string const &getName() const {return (this->name);};
			std::string	const &getTitle() const {return (this->title);};
			void	setTitle(std::string const &tit) { this->title = tit;};
			void	introduce() const;
};