#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

	public:

		PresidentialPardonForm( std::string const target );
		PresidentialPardonForm( PresidentialPardonForm const & toCopy );
		~PresidentialPardonForm( void );

		PresidentialPardonForm&	operator=( PresidentialPardonForm const & toAssign );

		void	execute( Bureaucrat const & executor ) const ;

	private:

		std::string	_target;

};