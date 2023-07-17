#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;


class WrongAnimal
{
	public :
		WrongAnimal();
		WrongAnimal(string type);
		~WrongAnimal();
		WrongAnimal(WrongAnimal const& toCopy);
		WrongAnimal &operator=(WrongAnimal const& toCopy);

		string	getType(void) const;
		void	makeSound(void) const;

	protected :
		string	_type;
};