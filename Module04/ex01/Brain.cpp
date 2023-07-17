#include "Brain.hpp"

Brain::Brain(){

}

Brain::~Brain()
{

}

Brain::Brain(Brain const& toCopy)
{
	*this = toCopy;
	cout << "Brain copied" << endl;
}

Brain& Brain::operator=(Brain const& toCopy)
{
	if(this == &toCopy)
		return (*this);
	
}