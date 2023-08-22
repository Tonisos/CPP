#pragma once

#include <iostream>
#include <stdexcept>

#include "AForm.hpp"

using std::exception;
using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Form;

class Bureaucrat{

	protected :
		const string	_name;
		int				_grade;



	public :
		Bureaucrat();
		Bureaucrat(string const name, int grade);
		~Bureaucrat();

		Bureaucrat(Bureaucrat const& toCopy);
		Bureaucrat &operator=(Bureaucrat const& toCopy);




		string	getName();
		int		getGrade();
		void	increaseGrade();
		void	decreaseGrade();


		void	signForm(Form &form);
};

class GradeTooHighException : public exception{
				const char* what() const throw();
};

class GradeTooLowException : public exception{
				const char* what() const throw();
};

ostream& operator<<(ostream &flux , Bureaucrat & _bureaucrat);
