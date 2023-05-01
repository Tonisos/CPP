#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::~Weapon(){};



const string& Weapon::getType(void) {return (_type);}





void	Weapon::setType(string newType)
{
	_type = newType;
}