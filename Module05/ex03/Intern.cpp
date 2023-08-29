#include "Intern.hpp"
#include "AForm.hpp"


Intern::Intern( void )
{
}


Intern::Intern( Intern const & toCopy )
{

	*this = toCopy;
}


Intern::~Intern( void )
{
}


Intern&	Intern::operator=( Intern const & toAssign )
{
	(void)toAssign;

	return (*this);
}


static AForm*	createPresidentialPardonForm( std::string target )
{
	return (new PresidentialPardonForm(target));
}


static AForm*	createRobotomyRequestForm( std::string target )
{
	return (new RobotomyRequestForm(target));
}


static AForm*	createShrubberyCreationForm( std::string target )
{
	return (new ShrubberyCreationForm(target));
}


AForm*	Intern::makeForm(std::string form_name, std::string target) const
{
	static const std::string	forms[3] = {
			"PresidentialPardonForm",
			"RobotomyRequestForm",
			"ShrubberyCreationForm"
	};

	static AForm* (*formFunctions[3])(std::string) = {
		&createPresidentialPardonForm,
		&createRobotomyRequestForm,
		&createShrubberyCreationForm
	};

	int	index;
	for ( index = 0; index < 3; index++)
	{
		if (forms[index] == form_name)
			break ;
	}

	if (index > 2)
	{
		return (NULL);
	}

	return ( (*formFunctions[index])(target) );
}