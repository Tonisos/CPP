#include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat();
		~Cat();
		Cat(Cat const& toCopy);
		Cat &operator=(Cat const& toCopy);
		void makeSound(void) const;

	private :


};