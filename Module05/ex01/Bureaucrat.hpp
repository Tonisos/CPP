#pragma once

#include <iostream>
#include <stdexcept>

using std::exception;
using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Bureaucrat{

	protected :
		const string	_name;
		int				_grade;



	public :
		Bureaucrat(string const name, int grade);
		~Bureaucrat();

		Bureaucrat(Bureaucrat const& toCopy);
		Bureaucrat &operator=(Bureaucrat const& toCopy);


		string	getName();
		int		getGrade();
		void	increaseGrade();
		void	decreaseGrade();
};

class GradeTooHighException : public exception{
				const char* what() const throw();
};

class GradeTooLowException : public exception{
				const char* what() const throw();
};

ostream& operator<<(ostream &flux , Bureaucrat & _bureaucrat);
