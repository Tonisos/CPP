#include "Zombie.hpp"

Zombie::Zombie() : m_name("INCONNU"){}


Zombie::Zombie(string name) : m_name(name){

}

Zombie::~Zombie()
{
	cout << m_name << " is dead" << endl;
}



void	Zombie::announce(void)
{
	cout << m_name << " : BraiiiiiiinnnzzzZ..." << endl;
}
