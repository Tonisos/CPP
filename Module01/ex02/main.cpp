#include <iostream>

using std::string;
using std::endl;
using std::cout;


int main()
{
	string			variable = "HI THIS IS BRAIN";
	std::string*	stringPTR = &variable;
	std::string& 	stringREF= variable;


	cout << "memory address of the string variable : " << &variable << endl;
	cout << "memory address held by stringPTR : " << stringPTR << endl;
	cout << "memory address held by stringREF : " << &stringREF << endl << endl;

	cout << "value of the string variable : " << variable << endl;
	cout << "value pointed to by stringPTR : " << *stringPTR << endl;
	cout << "value pointed to by stringREF : " << stringREF << endl;

	return 0;

}