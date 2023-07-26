#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	cout << "Cat created" << endl;

}

Cat::~Cat()
{
	cout << "Cat destroyed" << endl;

}

Cat::Cat(Cat const& toCopy)
{
	*this = toCopy;
	cout << "Cat copied" << endl;
}

Cat& Cat::operator=(Cat const& toCopy)
{
	if (this == &toCopy)
		return (*this);
	_type = toCopy._type;
	return (*this);
}

void Cat::makeSound(void) const
{
	cout << "miew miew" << endl;
}