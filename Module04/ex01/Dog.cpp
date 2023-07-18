#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog():Animal("Dog")
{
	BrainDog = new Brain();
	if (BrainDog == NULL)
		cout << "a Dog is born without a brain" << endl;
}

Dog::~Dog()
{
	cout << "Dog destroyed" << endl;
	delete BrainDog;
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

	BrainDog = new Brain(*toCopy.BrainDog); 
	if (BrainDog == NULL)
		cout << "a Dog is born without a brain" << endl; 
	return (*this);
}

void Dog::makeSound(void) const
{
	cout << "warf warf" << endl;
}