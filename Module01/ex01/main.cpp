#include "Zombie.hpp"

int main()
{
	Zombie *horde;

	horde = zombieHorde(6, "HECTOR");
	if (!horde)
		return 1;
	for(int i = 0; i < 6; i++)
	{
		horde[i].announce();

	}

	delete [] horde;
	return 0;
}