#pragma once

#include "AForm.hpp"

class RobotomyRequestForm: public Bureaucrat
{
	public:

		RobotomyRequestForm( string const target );
		RobotomyRequestForm( RobotomyRequestForm const & toCopy );
		~RobotomyRequestForm( void );

		RobotomyRequestForm&	operator=( RobotomyRequestForm const & toAssign );

		void	execute( Bureaucrat const & executor ) const ;

	private:

		string	_target;

};