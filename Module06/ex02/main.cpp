#include "Base.hpp"

Base*	generate( void )
{
	switch (rand() % 3)
	{
		case 0: return (new A());
		case 1: return (new B());
		case 2: return (new C());
		default: return (NULL);
	}
}

void	identify( Base* p )
{
	if (dynamic_cast<A*>(p))
    	std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
    	std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
    	std::cout << "C" << std::endl;
}

void	identify( Base& p )
{
	Base	test;

	try
	{
		test = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (...) { }
	try
	{
		test = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (...) { }
	try
	{
		test = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (...) { }
}


int main()
{
	srand(time(NULL));
	Base *test = generate();
	identify(test);
	delete test;
}