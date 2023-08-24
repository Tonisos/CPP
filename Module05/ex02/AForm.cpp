#include "AForm.hpp"

AForm::AForm():  _name("Default"), _signed(false), _signGrade(50), _executeGrade(50)
{

}

AForm::AForm(string name, int signGrade, int executeGrade): _name(name),_signed(false), _signGrade(signGrade)
, _executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
}

AForm::~AForm()
{

}

AForm::AForm(AForm const& toCopy)
{
	*this = toCopy;
}

AForm &AForm::operator=(AForm const &toCopy)
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

string AForm::getName()
{
	return (_name);
}

bool AForm::getSigned()
{
	return (_signed);
}

int AForm::getSignGrade()
{
	return (_signGrade);
}

int AForm::getExecuteGrade()
{
	return (_executeGrade);
}

ostream& operator<<(ostream &flux, AForm & _AForm)
{
	flux << "name : "<< _AForm.getName() << " is : " 
	<< boolToString(_AForm.getSigned()) << " and the grade required to sign it is : " << _AForm.getSignGrade()
	<<" and the  grade required to execute it is : " << _AForm.getExecuteGrade() << endl;
	return flux;
}

void AForm::beSigned(Bureaucrat &bureau)
{
	if (_signGrade > bureau.getGrade())
	{
		_signed = true;
		cout << "this AForm is signed" << endl;
	}
	else
		throw GradeTooLowException();
}

string boolToString(bool status)
{
	if (status)
		return ("signed");
	return ("not signed");

}