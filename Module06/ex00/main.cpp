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
	std::cout << INT_MAX << std::endl;
	std::cout << INT_MIN << std::endl;
	std::cout << DBL_MAX << std::endl;

	Convertisor.convert(type);
	return (0);
}