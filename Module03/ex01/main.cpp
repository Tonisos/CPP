#include "ScavTrap.hpp"

int main()
{
	ScavTrap Tonio("tonio");
	
	ClapTrap Toni;

	Toni.attack("Manu");

	Tonio.attack("Henry");
	Tonio.takeDamage(4);
	Tonio.takeDamage(5);
	Tonio.beRepaired(5);
	Tonio.attack("Manu");
	Tonio.takeDamage(5);
	Tonio.attack("Manu");
	Tonio.takeDamage(5);
	Tonio.beRepaired(5);
	Tonio.guardGate();

	ScavTrap Tonio2 = Tonio;
	
	return 0;
}