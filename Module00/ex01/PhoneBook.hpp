#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include "Contact.hpp"

using std::string;
using std::endl;
using std::cout;

class PhoneBook
{
	public :
			PhoneBook(void);

			void	add_contact();
			void	display_book();
			void	print_index(string prompt);
			int		get_count();

	private :
			Contact	contacts[8];
			int		index;
			int		count;
};


#endif