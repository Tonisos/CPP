#pragma once

#include "Weapon.hpp"


class HumanA
{
	public :
		HumanA(string _name, Weapon &weapon);
		~HumanA();
		void	attack(void);

	private :
		string	_name;
		Weapon&	_weapon;



};