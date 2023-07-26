#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
			ScavTrap();
			ScavTrap(string name);
			~ScavTrap();
			ScavTrap(ScavTrap &src);
			ScavTrap	&operator=(ScavTrap const &src);
			void		guardGate();
			void		attack(const string& target);

};