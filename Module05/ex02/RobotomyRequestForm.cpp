#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & toCopy ) : AForm(toCopy.getName(), toCopy.getGradeToSign(), toCopy.getGradeToExecute())
{
	*this = toCopy;
}


RobotomyRequestForm::~RobotomyRequestForm( void )
{

}


RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const & toAssign )
{
	if (this != &toAssign)
	{
		AForm::operator=(toAssign);
		_target = toAssign._target;
	}
	return (*this);
}
