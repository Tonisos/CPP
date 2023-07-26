#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Default")
{
	cout << "WrongAnimal created" << endl;
}

WrongAnimal::WrongAnimal(string type) : _type(type)
{
	cout << "WrongAnimal created" << endl;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal destroyed" << endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& toCopy) : _type(toCopy._type)
{
	*this = toCopy;
	cout << "WrongAnimal copied" << endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& toCopy)
{
	if(this == &toCopy)
		return (*this);
	_type = toCopy._type;
	return (*this);
}

string WrongAnimal::getType(void) const 
{
	return (_type);
}

void WrongAnimal::makeSound(void) const
{
	cout << "This is an WrongAnimal noise" << endl;
}