#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter const& toCopy)
{
	*this = toCopy;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const& toCopy)
{
	if(this == &toCopy)
		return (*this);
	return (*this);
}

//============================================================================ //

bool isNum(string src)
{
	int i = 0;
	int p = 0;

	while (i < (int)src.size())
	{
		// cout << (int)src.size()<< endl;
		if (!isdigit(src[i]) && src[i] != '.')
			{
				if (i + 1 == (int)src.size() && src[i] == 'f')
					;
				else
					return (false);
			}
		if (src[i] == '.')
		{
			p++;
			if (p > 1)
				return (false);
		}
		i++;
	}
	return (true);
}

//============================================================================//

void	ScalarConverter::convert(const string toConvert)
{
	if (toConvert == "nan" || toConvert == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return;
	}

	else if (toConvert == "+inf" || toConvert == "inf" || toConvert == "inff" || toConvert == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return;
	}

	else if (toConvert == "-inf" || toConvert == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return;
	}

	else if (toConvert == "-inf" || toConvert == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	else if (toConvert.size() == 1 && std::isprint(static_cast<char>(toConvert[0])))
	{
		std::cout << "char: " << toConvert << std::endl;
		std::cout << "int: " << static_cast<int>(toConvert[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toConvert[0]) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(toConvert[0]) << std::endl;
		return;
	}
	else if (!isNum(toConvert))
	{
		cout << "that type conversion is impossible" << endl;
		return;
	}
	else 
	{
			std::cout << "char: impossible" << std::endl;

			float	num = strtof(toConvert.c_str(), NULL);
			double num2 = str
			if ((int)num > INT_MIN && (int)num < INT_MAX)
				std::cout << "int: " <<(int)num << std::endl;
			else
				std::cout << "int: impossible" << std::endl;
			
			std::cout << "float: " << num << "f" << std::endl;

			if ((double)num > DBL_MIN && (double)num < DBL_MAX)
				std::cout << "double : " <<(double )num << std::endl;
			else
				std::cout << "double : impossible" << std::endl;
}
}