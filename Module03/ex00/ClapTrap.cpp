#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :Hit_points(10), Energy(10), Attack(0)
{
	Name = "DEFAULT";

}



ClapTrap::ClapTrap(string name) : Name(name), Hit_points(10), Energy(10), Attack(0) 
{

}

ClapTrap::~ClapTrap()
{
	cout << Name << " destroyed" << endl;
}

ClapTrap::ClapTrap(ClapTrap &toCopy)
{
	*this = toCopy;	
}

ClapTrap& ClapTrap::operator=(ClapTrap const &src)
{
	if (this == &src)
		return (*this);
	Name = src.Name;
	Hit_points = src.Hit_points;
	Energy = src.Energy;
	Attack = src.Attack;
	return (*this);
}		


void	ClapTrap::attack(const string& target)
{
	if (Hit_points > 0 && Energy > 0)
	{
		cout << Name << " attacks " << target << ", causing " 
		<< Attack << " points od damage!" << endl;
		Energy--;
	}
	else if ( Energy > 0)
		cout << Name << " is dead" << endl;
	else 
		cout << Name << " has no Energy left" << endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > Hit_points)
	{
		cout << Name << " took " << amount << " damages and now have " 
		<< Hit_points << " left" << endl;
		Hit_points = 0;
	}
	else
		Hit_points -= amount;
	if (Hit_points > 0 && Energy > 0)
	{
	cout << Name << " took " << amount << " damages and now have " 
	<< Hit_points << " left" << endl;
	}
	else
		cout << Name << " is dead" << endl;


}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Hit_points > 0 && Energy > 0)
	{
		Hit_points += amount;
		Energy --;
		cout << Name << " use 1 energy point to repaire and know have " 
		<< Hit_points << " Hit points and " << Energy << " point of energy" << endl;
	}
	else if ( Energy > 0)
		cout << Name << " is dead" << endl;
	else 
		cout << Name << " has no Energy left" << endl;

}