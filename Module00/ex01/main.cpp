/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:21:34 by amontalb          #+#    #+#             */
/*   Updated: 2023/04/27 14:59:48 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

using std::string;
using std::endl;
using std::cout;

int	main()
{
	string		prompt;
	PhoneBook	phonebook;

	while(true)
	{
		cout << "type ADD, SEARCH or EXIT" << endl;
		std::getline(std::cin, prompt);
		if (std::cin.eof())
			break;
		if (prompt == "EXIT")
			return 0;
		else if (prompt == "ADD")
			phonebook.add_contact();
		else if (prompt == "SEARCH")
		{
			if (phonebook.get_count())
			{
				phonebook.display_book();
				std::getline(std::cin, prompt);
				if (std::cin.eof())
					break;
				phonebook.print_index(prompt);
			}
			else
				cout << "the phonebook is empty" << endl;
		}
	}

	return 0;
}