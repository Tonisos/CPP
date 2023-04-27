#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Weapon
{
	public :
		string&	getType() const;
		void	setType(string newType);


	private :
		string type;


};