#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat():Animal("Cat")
{
	cout << "Cat created"<< endl;
	Braincat = new Brain;
	if (Braincat == NULL)
		cout << "a cat is born without a brain" << endl;
}

Cat::~Cat()
{
	delete Braincat;
	cout << "cat destroyed" << endl;
}

Cat::Cat(Cat const& toCopy)
{
	Braincat = new Brain(*toCopy.Braincat); 
	if (Braincat == NULL)
		cout << "a cat is born without a brain" << endl; 
	cout << "Cat copied" << endl;
	*this = toCopy;
}

Cat& Cat::operator=(Cat const& toCopy)
{
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