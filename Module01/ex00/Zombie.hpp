#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Zombie{

	public :
		Zombie();
		Zombie(string name);
		~Zombie();


		void announce(void);
		void setname(string name);



	private : 
		string m_name;




};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);


#endif
