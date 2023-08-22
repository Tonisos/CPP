#pragma once

#include "Form.hpp"

class RobotomyRequestForm: public Bureaucrat
{
	public:

		PresidentialPardonForm( string const target );
		PresidentialPardonForm( PresidentialPardonForm const & toCopy );
		~PresidentialPardonForm( void );

		PresidentialPardonForm&	operator=( PresidentialPardonForm const & toAssign );

		void	execute( Bureaucrat const & executor ) const ;

	private:

		string	_target;

};