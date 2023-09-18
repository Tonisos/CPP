#include "Array.hpp"

int main ()
{
	Array<int> array1;
	cout << array1.size() << endl;

	Array<int> array2(5);
	cout << array2.size() << endl;

	array1 = array2;
	cout << array1.size() << endl;
	try{
	array1[0] = 1;
	array1[1] = 2;
	array1[2] = 3;
	array1[3] = 4;
	array1[4] = 5;
	array1[5] = 6;
	}
	catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	try {
		for(int i = 0; i < 6; i++)
		cout << array1[i] << endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
  }