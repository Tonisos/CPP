#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	cout << endl;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	cout << endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	cout << endl;

	delete meta;
	delete j;
	delete i;

	std::cout <<std::endl;

	WrongAnimal *toto = new WrongCat();
	toto->makeSound();

	delete toto;

	return 0;
}