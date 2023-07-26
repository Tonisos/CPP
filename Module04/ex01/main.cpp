#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main()
{
	Animal* tab[100];
	for(int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			tab[i] = new Dog;
		else
			tab[i] = new Cat;
	}

	cout << endl;

	tab[2]->makeSound();
	tab[3]->makeSound();


	cout << endl;
	
	for(int i = 0; i < 100; i++)
		delete tab[i];


	return 0;
}