#pragma once

#include <iostream>
#include <limits.h>
#include <stdlib.h>

#define INT_MAX   __INT_MAX__

#define DBL_MAX   __DBL_MAX__
#define DBL_MIN   __DBL_MIN__


using std::cout;
using std::endl;
using std::string;

class ScalarConverter {

	private :


	public :
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const & toCopy);
		ScalarConverter &operator=(ScalarConverter const& toCopy);


		static void	convert(const string toConvert);
		


};

bool isNum(string src);
