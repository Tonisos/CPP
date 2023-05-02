#include "HumanB.hpp"


HumanB::HumanB(string name): _name(name), _weapon(NULL)
{

}


HumanB::~HumanB()
{

}

void HumanB::attack(void)
{
	if (_weapon)
		cout << _name <<"attacks with their " << _weapon->getType() << endl;
	else
		cout << _name << "attacks with nothing" << endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{

	_weapon = &newWeapon;

}