#include "Animal.hpp"

class Dog : public Animal
{
	public :
		Dog();
		~Dog();
		Dog(Dog const& toCopy);
		Dog &operator=(Dog const& toCopy);



	private :

		void makeSound(void) const;
};