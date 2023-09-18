#include "easyfind.hpp"

int main()
{
	std::vector<int> my_vector;
	my_vector.push_back(1);
	my_vector.push_back(2);
	my_vector.push_back(3);
	my_vector.push_back(4);
	try
    {
        easyfind(my_vector, 3);
    }
    catch (std::exception &e)
    {
       std::cout << e.what() << std::endl;
        exit(1);
    }
}