#include "HumanA.hpp"


HumanA::HumanA(string name, Weapon &weapon) : _name(name), _weapon(weapon)
{

}


HumanA::~HumanA(){}

void HumanA::attack(void)
{
	cout << _name <<"attacks with their " << _weapon.getType()<< endl;
}