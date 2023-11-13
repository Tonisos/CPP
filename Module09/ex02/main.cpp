#include "PmergeMe.hpp"

bool checkArgs(int argc, char **argv)
{
	if (argc < 2 || (argc == 2 && std::strlen(argv[1]) == 0))
		return (cerr << "no number found" << endl, false);

	if (argc > 3001)
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

	vector	<int> data;
	deque	<int> data2;
	fillContainer(data, argc, argv);
	fillContainer(data2, argc, argv);

	clock_t start = clock();
	mergeSort(data, 4);
	clock_t end = clock();

	clock_t start2 = clock();
	mergeSort(data2, 4);
	clock_t end2 = clock();



	double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
	double duration2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC * 1000.0;
	cout << "after : ";
	displayContainer(data);
	std::cout << "Time taken by using vector: " << duration << " milliseconds\n";
	std::cout << "Time taken by deque: " << duration2 << " milliseconds\n";


	

	
	
	return 0;
}

// for correction purpose
// ./PmergeMe $(shuf -i 1-100000 -n 3000 | tr "\n" " ")