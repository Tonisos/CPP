#pragma once

#include <iostream>
#include "Brain.hpp"

using std::string;
using std::cout;
using std::endl;


class Animal
{
	public :
		string	getType(void) const;
		virtual void	makeSound() const = 0;
		virtual ~Animal();
		Animal();
		Animal(string type);
		Animal(Animal const& toCopy);
		Animal &operator=(Animal const& toCopy);

	protected :
		string	_type;

};