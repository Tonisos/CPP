
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
	Bureaucrat toti("toti", 0);
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

}