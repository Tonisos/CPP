#pragma once

#include <iostream>
#include <stdexcept>

#include "AForm.hpp"

using std::exception;
using std::cout;
using std::endl;
using std::string;
using std::ostream;

class AForm;

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


		class GradeTooHighException : public exception{
			virtual const char* what( void ) const throw()
			{
				return ("Grade is too hight");
			}
		};

		class GradeTooLowException : public exception{
			virtual const char* what( void ) const throw()
			{
				return ("Grade is too low");
			}
		};

		string	getName() const ;
		int		getGrade() const;
		void	increaseGrade();
		void	decreaseGrade();


		void	signForm(AForm &form);

		void	executeForm(AForm const & form) const;

};

ostream& operator<<(ostream &flux , Bureaucrat & _bureaucrat);
