#pragma once

#include "Weapon.hpp"


class HumanB
{
	public :
		HumanB(string name);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &newWeapon);

	private :
		string	_name;
		Weapon*	_weapon;



};