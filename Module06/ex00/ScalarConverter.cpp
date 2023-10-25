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
	if (src[0] == '-')
		i++;
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

void	printint(std::string scalar) {
	long	nb;

	nb = std::strtol(scalar.c_str(), NULL, 10);
	if (nb > 31 && nb < 127)
		std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	else
		std::cout << "char: Not displayable" << std::endl;
	if (nb <= 2147483647 && nb >= INT_MIN)
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (nb <= FLT_MAX && nb >= -FLT_MAX)
		std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
	if (nb <= DBL_MAX && nb >= -DBL_MAX)
		std::cout << "double: " << static_cast<double>(nb) << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}

int	printchar(std::string scalar) {
	char toChar = scalar[0];
	std::cout << "char: '" << toChar << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(toChar) << std::endl;
	std::cout << "float: " << static_cast<float>(toChar) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(toChar) << ".0" << std::endl;
	return 0;
}

void	printdouble(std::string scalar) {
	double dblvalue = std::strtod(scalar.c_str(), NULL);
	int intValue = static_cast<int>(dblvalue);

	double fractionalPart;
	double integralPart = std::modf(dblvalue, &fractionalPart);

	if (integralPart == 0.0 && dblvalue > 31.0 && dblvalue < 127.0) {
		std::cout << "char: '" << static_cast<char>(intValue) << "'" << std::endl;
	} else {
		std::cout << "char: Not displayable" << std::endl;
	}
	if (dblvalue <= 2147483647.0 && dblvalue >= INT_MIN)
		std::cout << "int: " << static_cast<int>(dblvalue) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (dblvalue <= FLT_MAX && dblvalue >= -FLT_MAX)
		std::cout << "float: " << static_cast<float>(dblvalue) << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
	if (dblvalue <= DBL_MAX && dblvalue >= -DBL_MAX)
		std::cout << "double: " << static_cast<double>(dblvalue) << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}

void	printfloat(std::string scalar) {
	float floatValue = std::strtof(scalar.c_str(), 0);
	int intValue = static_cast<int>(floatValue);

	float fractionalPart;
	float integralPart = std::modf(floatValue, &fractionalPart);
	if (integralPart == 0.0f && floatValue > 31.0f && floatValue < 127.0f) {
		std::cout << "char: '" << static_cast<char>(intValue) << "'" << std::endl;
	} else {
		std::cout << "char: Not displayable" << std::endl;
	}
	if (floatValue <= 2147483647.0f && floatValue >= INT_MIN)
		std::cout << "int: " << static_cast<int>(floatValue) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (floatValue <= FLT_MAX && floatValue >= -FLT_MAX)
		std::cout << "float: " << static_cast<float>(floatValue) << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
	if (floatValue <= DBL_MAX && floatValue >= -DBL_MAX)
		std::cout << "double: " << static_cast<double>(floatValue) << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}



void stringToFloatOrDouble(const std::string &str, bool *isFloat)
{
	char *endPtr;
	std::strtof(str.c_str(), &endPtr);
	if (*endPtr != '\0' && *endPtr == 'f') {
		*isFloat = true;
		return ;
	}
	*isFloat = false;
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
	else if (!isNum(toConvert))
	{
		cout << "that type conversion is impossible" << endl;
		return;
	}
	if (toConvert.size() == 1 && std::isprint(toConvert[0]) && !std::isdigit(toConvert[0]))
		printchar(toConvert);
	// if it's a float or double:
	if (toConvert.find(".", 0) != std::string::npos || toConvert.find("f", 0) != std::string::npos) 
	{
		bool	isfloat;
		stringToFloatOrDouble(toConvert, &isfloat);
		if (isfloat)
			printfloat(toConvert);
		else
			printdouble(toConvert);
	}
	else
		printint(toConvert); // if it's a int
}