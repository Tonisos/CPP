
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int	main()
{
	try
	{
	Bureaucrat toto("toto", 180);
	}
	catch(exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
	Bureaucrat toti("toti", 1);
	}
	catch(exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
	Bureaucrat tota("tota", 5);
	}
	catch(exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	Bureaucrat toni("toni", 149);
	cout << toni << endl;
	try 
	{
		toni.decreaseGrade();
	}
	catch (exception &e)
	{
		std::cerr<< e.what() << endl;
	}
	cout << toni << endl;
	try 
	{
		toni.decreaseGrade();
	}
	catch (exception &e)
	{
		std::cerr<< e.what() << endl;
	}
	cout << toni << endl;

	

	cout << endl;

	

	Bureaucrat tonio("tonio", 1);
	
	ShrubberyCreationForm test("test");
	PresidentialPardonForm test2("test2");
	RobotomyRequestForm test3("test3");
	try
	{
		test.beSigned(tonio);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	test2.beSigned(tonio);
	test3.beSigned(tonio);
	
	// try {
	// 	test.execute(tonio);
	// }
	// catch (exception &e)
	// {
	// 	std::cerr<< e.what() << endl;
	// }
	
	cout << "____________________________" << endl;

	try {
		test2.execute(tonio);
	}
	catch (exception &e)
	{
		std::cerr<< e.what() << endl;
	}

	try {
		test3.execute(tonio);
	}
	catch (exception &e)
	{
		std::cerr<< e.what() << endl;
	}


	
}