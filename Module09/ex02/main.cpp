#include "PmergeMe.hpp"

bool checkArgs(int argc, char **argv)
{
	if (argc < 2 || (argc == 2 && std::strlen(argv[1]) == 0))
		return (cerr << "no number found" << endl, false);

	if (argc > 3000)
		return (cerr << "to much argument" << endl, false);

	for (int i = 1; argv[i]; i++)
	{
		char* endPtr;
		long int value = std::strtol(argv[i], &endPtr, 10);
		if (*endPtr != '\0' && *endPtr != '\n')
			return (cerr << "invalid argument" << endl, false);
		if (value > INT_MAX)
			return (cerr << "number > INT_MAX" << endl, false);
		if (value < 0)
			return (cerr << "ONLY POSITIVE INTEGER PLEASE" << endl, false);
	}
	return true;
}

void displayBefore(char **argv)
{
	cout << "before : ";
	for (int i = 1; argv[i]; i++)
		cout << argv[i] << " " ;
	cout << endl;
}

int main(int argc, char** argv)
{
	if (!checkArgs(argc, argv))
		return 1;
	displayBefore(argv);
	
	
	return 0;
}