#ifndef CONTACT_HPP
#define contact_HPP

#include <string>
#include <iostream>

using std::string;
using std::endl;
using std::cout;



class Contact 
{
	public :

	void	init_last_name(string str);
	void	init_first_name(string str);
	void	init_nickname(string str);
	void	init_num(string str);
	void	init_secret(string str);
	void	print();
	void	print_private();

	private :

	string	m_last_name;
	string	m_first_name;
	string	m_nickname;
	string m_secret;
	string	m_phone;
};

#endif