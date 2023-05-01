#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Weapon
{
	public :
		Weapon ();
		~Weapon();

		const std::string&	getType() ;
		void				setType(string newType);


	private :
		string _type;


};

#endif