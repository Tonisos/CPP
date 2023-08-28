#pragma once
#include "Bureaucrat.hpp"

using std::exception;
using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Bureaucrat;


class Form{

	private :
		string 			_name;
		bool			_signed;
		mutable  int	_signGrade;
		mutable  int	_executeGrade;


	public :
		Form();
		Form(string name, int signGrade, int executeGrade);
		~Form();
		Form(Form const& toCopy);
		Form &operator=(Form const& toCopy);

		string getName();
		bool getSigned();
		int getSignGrade();
		int getExecuteGrade();

		void	beSigned(Bureaucrat &bureau);


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
// class GradeTooHighException : public exception{
// 				const char* what() const throw();
// };

// class GradeTooLowException : public exception{
// 				const char* what() const throw();
// };


ostream& operator<<(ostream &flux, Form & _Form);


string boolToString(bool status);