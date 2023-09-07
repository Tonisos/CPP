#include "Serializer.hpp"

int main()
{
	struct Data toto;
	toto.i = 7;
	toto.c = 'c';
	
	Serializer captain;
	uintptr_t j = captain.serialize(&toto);
	cout << "j = " << j << endl;

	struct Data *tata = captain.deserialize(j);
	cout << tata->i << endl;
	cout << tata->c << endl;
}

