#pragma once

#include <iostream>
#include "Brain.hpp"

using std::string;
using std::cout;
using std::endl;


class Animal
{
	public :
		Animal();
		Animal(string type);
		virtual ~Animal();
		Animal(Animal const& toCopy);
		Animal &operator=(Animal const& toCopy);

		string	getType(void) const;
		virtual void	makeSound() const;

	protected :
		string	_type;
		


};