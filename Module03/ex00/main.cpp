#include "ClapTrap.hpp"

int main()
{
	ClapTrap Tonio("tonio");
	

	Tonio.attack("Henry");
	Tonio.takeDamage(4);
	Tonio.takeDamage(5);
	Tonio.beRepaired(5);
	Tonio.attack("Manu");
	Tonio.takeDamage(5);
	Tonio.attack("Manu");
	Tonio.takeDamage(5);
	Tonio.beRepaired(5);
	
	return 0;
}