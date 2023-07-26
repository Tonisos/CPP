#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(string const name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade >150)
		throw GradeTooLowException();
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
	_name = toCopy._name;
	_grade = toCopy._grade;

}