#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	cout << "WrongCat created" << endl;
}

WrongCat::~WrongCat()
{
	cout << "WrongCat created" << endl;
}



WrongCat::WrongCat(WrongCat const& toCopy)
{
	*this = toCopy;
	cout << "WrongCat copied" << endl;
}

WrongCat& WrongCat::operator=(WrongCat const& toCopy)
{
	if (this == &toCopy)
		return (*this);
	_type = toCopy._type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	cout << "Wrong miew miew" << endl;
}