#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


using std::string;
using std::cout;
using std::endl;

class Zombie
{
	public :
		Zombie();
		Zombie(string name);
		void announce(void);
		void setname(string name);


	private :

		string m_name;





};

Zombie* zombieHorde(int N, std::string name);

#endif