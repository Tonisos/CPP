#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	Hit_points = 100;
	Energy = 50;
	Attack = 20;
	cout << "Scavtrap created" << endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	Hit_points = 100;
	Energy = 50;
	Attack = 20;
	cout << "Scavtrap created" << endl;
}


ScavTrap::~ScavTrap()
{
	cout << "ScavTrap destroid" << endl;
}

void	ScavTrap::guardGate()
{
	cout << Name << " is now in Gate keeper mode" << endl;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	if (this == &src)
		return (*this);
	Name = src.Name;
	Hit_points = src.Hit_points;
	Energy = src.Energy;
	Attack = src.Attack;
	return (*this);
}

ScavTrap::ScavTrap(ScavTrap &src) : ClapTrap()
{
	*this = src;	
}

void	ScavTrap::attack(const string& target)
{
	if (Hit_points > 0 && Energy > 0)
	{
		cout << "ScavTrap " << Name << " attacks " << target << ", causing " 
		<< Attack << " points of damage!" << endl;
		Energy--;
	}
	else if ( Energy > 0)
		cout << "ScavTrap " << Name << " is dead and thus cannot attack" << endl;
	else 
		cout << "ScavTrap " << Name << " has no Energy left and thus cannot attack" << endl;

}