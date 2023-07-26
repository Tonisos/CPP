#include "Bureaucrat.hpp"

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
	Bureaucrat toto("toto", 0);
	}
	catch(exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

}