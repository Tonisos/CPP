#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

class Intern
{

public:

	Intern( void );
	Intern( Intern const & toCopy );
	~Intern( void );

	Intern&	operator=( Intern const & toAssign );

	AForm*	makeForm( std::string form_name, std::string target ) const;

private:

};