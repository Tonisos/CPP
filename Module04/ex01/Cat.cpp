#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat():Animal("Cat")
{
	cout << "Cat created" << endl;
	Braincat = new Brain();
	if (Braincat == NULL)
		cout << "a cat is born without a brain" << endl;
}

Cat::~Cat()
{
	cout << "cat destroyed" << endl;
	delete Braincat;
}

Cat::Cat(Cat const& toCopy)
{
	cout << "Cat Copy constructor called" << endl;
	Braincat = new Brain(*toCopy.Braincat); 
	if (Braincat == NULL)
		cout << "a cat is born without a brain" << endl; 
	*this = toCopy;
}

Cat& Cat::operator=(Cat const& toCopy)
{
	cout << "Cat Assignment operator called" << endl;
	if (this == &toCopy)
		return (*this);
	_type = toCopy._type;

	*Braincat = *toCopy.Braincat; 
	return (*this);
}

void Cat::makeSound(void) const
{
	cout << "miew miew" << endl;
}