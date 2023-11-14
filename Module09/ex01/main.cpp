#include "RPN.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
		return (std::cerr << "you need to have " << argv[0] << " <calcul to do>" << std::endl, 1);
	if (argv[1][0] == '\0')
		return 0;
	for (size_t i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] != ' ')
			break;
		if (i == strlen(argv[1]) - 1)
			return 0;
	}

	execute(argv[1]);
	return 0;


}