#include "Contact.hpp"

using std::cout;
using std::endl;
using std::string;

string truncated(string str)
{
	if (str.size() > 10)
	{
		str = str.substr(0, 9);
		str.append(".");
	}
	else if (str.size() < 10)
	{
		while (str.size() < 10)
			str.insert(0, " ");
	}
	return(str);
}

void	Contact::init_last_name(string str)
{
	m_last_name = str;
}

void	Contact::init_first_name(string str)
{

	m_first_name = str;
}

void	Contact::init_nickname(string str)
{
	m_nickname = str;
}

void	Contact::init_num(string str)
{
	
	m_phone = str;
}

void	Contact::init_secret(string str)
{
	m_secret = str;
}

void	Contact::print()
{
	cout << "|" << truncated(m_first_name);
	cout << "|" << truncated(m_last_name) ;
	cout << "|" << truncated(m_nickname) << "|" ;
}

void	Contact::print_private()
{
	cout << "first name : " << m_first_name << endl;
	cout << "last name : " << m_last_name << endl;
	cout << "nickname : " << m_nickname << endl;
	cout << "phone number : " << m_phone << endl;
	cout << "Darkest secret : " << m_secret << endl;
}