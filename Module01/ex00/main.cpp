#include "Zombie.hpp"

int	main ()
{
	Zombie *zombie1;

	zombie1 = newZombie("toto");
	if (!zombie1)
		return 1;
	zombie1->announce();
	delete zombie1;

	//------------------------------

	randomChump("tete");

	//-------------------------

	Zombie zombie2;

	zombie2.announce();


	return 0;
}