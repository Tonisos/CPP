#pragma once

#include <iostream>
#include <stdint.h>

using std::cout;
using std::endl;
using std::string;

struct Data {
	int i;
	char c;

};

class Serializer{

	public :

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

	private :
		Serializer();
		~Serializer();
		Serializer(Serializer const &toCopy);
		Serializer &operator=(Serializer const &toCopy);


};

