#include "Serializer.hpp"

int main()
{
	struct Data toto;
	toto.i = 7;
	toto.c = 'c';
	
	
	uintptr_t j = Serializer::serialize(&toto);
	cout << "j = " << j << endl;

	struct Data *tata = Serializer::deserialize(j);
	cout << tata->i << endl;
	cout << tata->c << endl;
}

