#pragma once

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	public:

		RobotomyRequestForm( string const target );
		RobotomyRequestForm( RobotomyRequestForm const & toCopy );
		~RobotomyRequestForm( void );

		RobotomyRequestForm&	operator=( RobotomyRequestForm const & toAssign );

		void	execute(Bureaucrat const & executor) ;

	private:

		string	_target;

};