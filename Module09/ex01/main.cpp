#include "RPN.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
		return (std::cerr << "you need to have " << argv[0] << " <calcul to do>" << std::endl, 1);

	execute(argv[1]);
	return 0;


}