#pragma once
#include "Bureaucrat.hpp"

class Form{

	public :
		Form();
		~Form();
		Form(Form const& toCopy);
		Form &operator=(Form const& toCopy);

		string getName();
		bool getSigned();
		int getSignGrade();
		int getExecuteGrade();

	private :
		std::string _name;
		bool		_signed;
		mutable  int	_signGrade;
		mutable  int	_executeGrade;

};

ostream& operator<<(ostream &flux, Form & _Form);
