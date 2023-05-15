#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap(string name);
		~FragTrap();
		FragTrap(FragTrap &toCopy);
		FragTrap &operator=(const FragTrap &src);
		



		void highFivesGuys(void);
};