#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class	Harl
{
	public :
		Harl();
		~Harl();
		void complain(string level);

	private :

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};