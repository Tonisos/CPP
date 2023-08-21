#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog():Animal("Dog")
{
	cout << "Cat created"<< endl;

	BrainDog = new Brain();
	if (BrainDog == NULL)
		cout << "a Dog is born without a brain" << endl;
}

Dog::~Dog()
{
	delete BrainDog;
	cout << "Dog destroyed" << endl;
}

Dog::Dog(Dog const& toCopy)
{
	BrainDog = new Brain(*toCopy.BrainDog); 
	if (BrainDog == NULL)
		cout << "a Dog is born without a brain" << endl; 
	cout << "Dog copied" << endl;
	*this = toCopy;
}

Dog& Dog::operator=(Dog const& toCopy)
{
	if (this == &toCopy)
		return (*this);
	_type = toCopy._type;

	*BrainDog = *toCopy.BrainDog;
	
	return (*this);
}

void Dog::makeSound(void) const
{
	cout << "warf warf" << endl;
}