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
		Serializer();
		~Serializer();
		Serializer(Serializer const &toCopy);
		Serializer &operator=(Serializer const &toCopy);

		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);

	private :


};

