#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const target ) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}


PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & toCopy ) : AForm(toCopy.getName(), toCopy.getSignGrade(), toCopy.getExecuteGrade())
{
	*this = toCopy;
}


PresidentialPardonForm::~PresidentialPardonForm( void )
{

}


PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const & toAssign )
{
	if (this != &toAssign)
	{
		AForm::operator=(toAssign);
		_target = toAssign._target;
	}
	return (*this);
}