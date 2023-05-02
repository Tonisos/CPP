#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;


class Weapon
{
	public :
		Weapon (string type);
		~Weapon();

		const std::string&	getType(void) ;
		void				setType(string newType);


	private :
		string _type;


};

#endif