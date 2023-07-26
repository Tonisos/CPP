#pragma once 

#include "Animal.hpp"

using std::string;

class Brain {

	public :

		Brain();
		~Brain();
		Brain (Brain const& toCopy);
		Brain &operator=(Brain const& toCopy);

	private :

		string ideas[100];
};