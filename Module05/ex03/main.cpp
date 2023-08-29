
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int	main()
{
	// {
	// 	Intern		intern;
	// 	Bureaucrat	master("class", 1);

	// 	AForm* form = intern.makeForm("RobotomyRequestForm", "lol");
	// 	master.signForm(*form);
	// 	master.executeForm(*form);

	// 	delete form;
	// }

	{
		Intern		intern;
		Bureaucrat	master("class", 1);

		AForm* form = intern.makeForm("Form", "lol");
		if (form)
		{
			master.signForm(*form);
			master.executeForm(*form);
		}

		delete form;

	}

	{
		Intern		intern;
		Bureaucrat	master("class", 150);

		AForm* form = intern.makeForm("PresidentialPardonForm", "lol");
		master.signForm(*form);
		master.executeForm(*form);

		delete form;
	}

	
}