#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	Hit_points = 100;
	Energy = 100;
	Attack = 30;

}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	Hit_points = 100;
	Energy = 100;
	Attack = 30;
}


FragTrap::~FragTrap()
{
	cout << "FragTrap destroid" << endl;
}


FragTrap &FragTrap::operator=(FragTrap const &src)
{
	if (this == &src)
		return (*this);
	Name = src.Name;
	Hit_points = src.Hit_points;
	Energy = src.Energy;
	Attack = src.Attack;
	return (*this);
}

FragTrap::FragTrap(FragTrap &src) : ClapTrap()
{
	*this = src;	
}





void FragTrap::highFivesGuys(void)
{
	cout << "this is a positive high fives request " << endl;
}
