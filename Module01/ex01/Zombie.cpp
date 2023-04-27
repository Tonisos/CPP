#include "Zombie.hpp"

Zombie::Zombie() : m_name("INCONNU"){}


Zombie::Zombie(string name) : m_name(name){

}


void	Zombie::announce(void)
{
	cout << m_name << " : BraiiiiiiinnnzzzZ..." << endl;
}


void	Zombie::setname(string name)
{
	m_name = name;
}