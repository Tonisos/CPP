#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
	public :
					ClapTrap();
					ClapTrap(string name);
					~ClapTrap();
					ClapTrap(ClapTrap &toCopy);
		ClapTrap	&operator=(ClapTrap const &src);
		void		attack(const string& target);
		void		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);

	protected :

		string				Name;
		unsigned int		Hit_points;
		unsigned int		Energy;
		unsigned int		Attack;
};

#endif