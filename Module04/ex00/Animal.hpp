#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;


class Animal
{
	public :
		Animal();
		Animal(string type);
		~Animal();
		Animal(Animal const& toCopy);
		Animal &operator=(Animal const& toCopy);

		string	getType(void) const;
		void	makeSound(void) const;

	protected :
		string	_type;
		


};