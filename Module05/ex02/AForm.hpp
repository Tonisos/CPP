#pragma once
#include "Bureaucrat.hpp"
#include <cstdlib>

using std::exception;
using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Bureaucrat;


class AForm{

	private :
		string 			_name;
		bool			_signed;
		mutable  int	_signGrade;
		mutable  int	_executeGrade;


	public :
		AForm();
		AForm(string name, int signGrade, int executeGrade);
		~AForm();
		AForm(AForm const& toCopy);
		AForm &operator=(AForm const& toCopy);

		string getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExecuteGrade() const;

		void	beSigned(Bureaucrat &bureau);
		virtual void	execute( Bureaucrat const & executor ) const = 0;


		class GradeTooLowException: public std::exception
		{
			virtual const char* what( void ) const throw()
			{
				return ("Grade too low");
			}
		};

		class GradeTooHighException: public std::exception
		{
			virtual const char* what( void ) const throw()
			{
				return ("Grade too high");
			}
		};
		class FormNotSigned: public std::exception
		{
			virtual const char* what( void ) const throw()
			{
				return ("this Form is not signed");
			}
		};

};



ostream& operator<<(ostream &flux, AForm & _AForm);


string boolToString(bool status);