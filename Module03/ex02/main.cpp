#include "FragTrap.hpp"

int main()
{
	FragTrap  Tonio("tonio");
	

	Tonio.attack("Henry");
	Tonio.takeDamage(4);
	Tonio.takeDamage(5);
	Tonio.beRepaired(5);
	Tonio.attack("Manu");
	Tonio.takeDamage(5);
	Tonio.attack("Manu");
	Tonio.takeDamage(5);
	Tonio.beRepaired(5);
	Tonio.highFivesGuys();


	
	return 0;
}