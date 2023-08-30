#include "ScalarConverter.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		cout << "only one argument please" << endl;
		return (1);
	}

	string type(argv[1]);
	ScalarConverter Convertisor;
	
	Convertisor.convert(type);
	return (0);
}