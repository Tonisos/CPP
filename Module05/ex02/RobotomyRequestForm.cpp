#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & toCopy ) : Form(toCopy.getName(), toCopy.getGradeToSign(), toCopy.getGradeToExecute())
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
		Form::operator=(toAssign);
		_target = toAssign._target;
	}
	return (*this);
}
