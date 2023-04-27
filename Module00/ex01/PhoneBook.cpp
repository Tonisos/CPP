#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void)
{
	index = 0;
	count = 0;
}

int	PhoneBook::get_count(void)
{
	return (count);
}

void	PhoneBook::add_contact()
	{
		string	attributs[5];
		string	instructions[5] = {
			"first name",
			"last name",
			"nickname",
			"phone number",
			"darkest secret"
		};


		if (index > 7)
			index = 0;
		for (int i = 0; i < 5; i++)
		{
			cout << instructions[i] << ":" << endl;
			std::getline(std::cin, attributs[i]);
			if (std::cin.eof())
				std::exit(0);
			if (attributs[i].empty())
				i--;
		}
		contacts[index].init_first_name(attributs[0]);
		contacts[index].init_last_name(attributs[1]);
		contacts[index].init_nickname(attributs[2]);
		contacts[index].init_num(attributs[3]);
		contacts[index].init_secret(attributs[4]);
		index ++;
		if (count < 8)
			count ++;
		return ;
	}

void	PhoneBook::display_book()
	{	
		cout << "_____________________________________________" << endl;
		cout << "|-----index|first-name|-last-name|--nickname|" << endl;
		cout << "|          |          |          |          |" << endl;
		for (int i = 0; i < count; i++)
		{
			cout << "|" << "........."<< i + 1 ;
			contacts[i].print();
			cout << endl;
		}
		cout << endl << endl << endl;
		cout << "type the index of the contact you want to see" << endl;
	}

void	PhoneBook::print_index(string prompt)
{
	int i = std::atoi(prompt.c_str());
	if (i < 1 || i > count)
	{
		cout << "invalid index" << endl;
		return ;
	}
	
	cout << endl << "INDEX : " << i << endl;
	contacts[i - 1].print_private();
	cout << endl;
}