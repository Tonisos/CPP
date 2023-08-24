#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(string const name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat const& toCopy)
{
	*this = toCopy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const& toCopy)
{
	if(this == &toCopy)
		return (*this);
	// _name = toCopy.getName();
	_grade = toCopy._grade;
	return (*this);
}

string Bureaucrat::getName(void)
{
	return (_name);	
}

int Bureaucrat::getGrade(void)
{
	return (_grade);	
}

void Bureaucrat::increaseGrade()
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decreaseGrade()
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

ostream& operator<<(ostream &flux , Bureaucrat & _bureaucrat)
{
	flux << _bureaucrat.getName() << ", bureaucrat grade " <<_bureaucrat.getGrade()<< endl;
	return flux;
}

void Bureaucrat::signForm(AForm &form)
{
	if (form.getSigned() == false && form.getSignGrade() >= getGrade())
	{
		cout << getName() << " signed " << form.getName() << endl;
		form.beSigned(*this);
	}
	else if (form.getSigned() == true)
		cout << getName() << " couldn't signed " << form.getName() << " because it's already signed" << endl;
	else 
		cout << getName() << " couldn't signed " << form.getName() << " because the grade is too low to sign" << endl;
}