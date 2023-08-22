
#include "Form.hpp"

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
	Form bac;
	cout << bac << endl;

	cout << endl;

	Form bic("toto", 100, 150);

	Bureaucrat tonio("tonio", 1);
	try 
	{
		tonio.signForm(bic);
	}
	catch (exception &e)
	{
		std::cerr<< e.what() << endl;
	}
	
	
}