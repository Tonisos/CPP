#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	cout << "Dog created" << endl;
}
Dog::~Dog()
{
	cout << "Dog destoyed" << endl;

}


Dog::Dog(Dog const& toCopy)
{
	*this = toCopy;
	cout << "Dog copied" << endl;
}

Dog& Dog::operator=(Dog const& toCopy)
{
	if (this == &toCopy)
		return (*this);
	_type = toCopy._type;
	return (*this);
}

void Dog::makeSound(void) const
{
	cout << "warf warf" << endl;
}