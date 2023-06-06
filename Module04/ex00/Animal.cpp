#include "Animal.hpp"

Animal::Animal() : _type("Default")
{
	cout << "Animal created" << endl;
}

Animal::Animal(string type) : _type(type)
{
	cout << "Animal created" << endl;
}

Animal::~Animal()
{
	cout << "Animal destroyed" << endl;
}

Animal::Animal(Animal const& toCopy) : _type(toCopy._type)
{
	*this = toCopy;
	cout << "Animal copied" << endl;
}

Animal& Animal::operator=(Animal const& toCopy)
{
	if(this == &toCopy)
		return (*this);
	_type = toCopy._type;
	return (*this);
}

string Animal::getType(void) const 
{
	return (_type);
}

void Animal::makeSound(void) const
{
	cout << "This is an animal noise" << endl;
}