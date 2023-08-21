#include "Brain.hpp"

Brain::Brain()
{
	cout << "Brain created" << endl;
}

Brain::~Brain()
{
	cout << "Brain destroyed" << endl;
}

Brain::Brain(Brain const& toCopy)
{
	cout << "Brain Copy constructor called" << endl;
	*this = toCopy;
}

Brain& Brain::operator=(Brain const& toCopy)
{
	cout << "Brain Assignment operator called" << endl;
	
	if(this == &toCopy)
		return (*this);
	for (int i = 0; i < 100; i++)
		ideas[i] = toCopy.ideas[i];
	return (*this);
}