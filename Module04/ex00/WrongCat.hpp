#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const& toCopy);
		WrongCat &operator=(WrongCat const& toCopy);



	private :

		void makeSound(void) const;

};