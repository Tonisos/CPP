#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( string const target ) : Form("ShrubberyCreationForm", 145 , 137), _target(target)
{

}


ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & toCopy ) : Form(toCopy.getName(), toCopy.getGradeToSign(), toCopy.getGradeToExecute())
{
	*this = toCopy;
}


ShrubberyCreationForm::~ShrubberyCreationForm( void )
{

}


ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & toAssign )
{
	if (this != &toAssign)
	{
		Form::operator=(toAssign);
		_target = toAssign._target;
	}
	return (*this);
}