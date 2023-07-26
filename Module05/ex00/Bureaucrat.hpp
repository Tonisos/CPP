#pragna once

#include <iostream>
#include <stdexcept>

using std::exception;
using std::cout;
using std::endl;
using std::string;

class Bureaucrat{

	protected :
		const string	_name;
		int				_grade;



	public :
		Bureaucrat(string const name, int grade);
		~Bureaucrat();

		Bureaucrat(Bureaucrat const& toCopy);
		Bureaucrat &operator=(Bureaucrat const& toCopy);


		void getName();
		void getGrade();
		void increaseGrade();
		void decreaseGrade();

		class GradeTooHightException : public exception{
			
		}


};