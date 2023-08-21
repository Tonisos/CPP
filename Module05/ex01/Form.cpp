#include "Form.hpp"

Form::Form():  _name("Default"), _signed(false), _signGrade(50), _executeGrade(50)
{

}

Form::~Form()
{

}

Form::Form(Form const& toCopy)
{
	*this = toCopy;
}

Form &Form::operator=(Form const &toCopy)
{
	if (this != &toCopy)
	{
		_name = toCopy._name;
		_signed = toCopy._signed;
		_signGrade = toCopy._signGrade;
		_executeGrade = toCopy._executeGrade;
	}
	return (*this);
}

string Form::getName()
{
	return (_name);
}

bool Form::getSigned()
{
	return (_signed);
}

int Form::getSignGrade()
{
	return (_signGrade);
}

int Form::getExecuteGrade()
{
	return ((int)_executeGrade);
}

ostream& operator<<(ostream &flux, Form & _Form)
{
	flux << "name : "<< _Form.getName() << " is : " 
	<< _Form.getSigned() << " and the grade required to sign it is : " << _Form.getSignGrade()
	<<" and the  grade required to execute it is : " << _Form.getExecuteGrade() << endl;
	return flux;
}
