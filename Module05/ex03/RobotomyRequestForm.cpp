#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string const target ) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & toCopy ) : AForm(toCopy.getName(), toCopy.getSignGrade(), toCopy.getExecuteGrade())
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

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw(FormNotSigned());
	if (executor.getGrade() > getExecuteGrade())
		throw(GradeTooLowException());	
	cout << "some drilling noises." << endl;
	if (rand() % 2)
		cout << _target << " has been robotomized successfully"<< endl;
	else
		cout << " the robotomy failed" << endl;
}