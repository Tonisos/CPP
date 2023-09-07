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
  bool is_a = dynamic_cast<A&>(p) != std::nullptr_t{};
  bool is_b = dynamic_cast<B&>(p) != std::nullptr_t{};
  bool is_c = dynamic_cast<C&>(p) != std::nullptr_t{};

  if (is_a) {
    std::cout << "A" << std::endl;
  } else if (is_b) {
    std::cout << "B" << std::endl;
  } else if (is_c) {
    std::cout << "C" << std::endl;
  }
}


int main()
{
	srand(time(NULL));
}