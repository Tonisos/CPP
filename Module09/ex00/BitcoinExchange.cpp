#include "BitcoinExchange.hpp"

bool checkdate(string date)
{
	if (date.size() != 10 || date[4] != '-' || date[7]!= '-')
		return (std::cout << "Error: not a valid date => " << date << std::endl, false);

	string syear;
	string smonth;
	string sday;

	syear = date.substr(0, 4);
	smonth = date.substr(5, 2);
	sday = date.substr(8, 2);

	int year;
	int month;
	int	day;
	
	if (std::sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3) 
        return false;
	
	if (year > 2023 || year < 1900 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	return true;
}

bool checkvalue(string value)
{
	double dvalue;
	if (std::sscanf(value.c_str(), "%d", &dvalue) != 1)
		return false;
	if (dvalue <= 0 || dvalue >= 1000)	
		return false;
	return true;
}

bool checkline(string line)
{
	
	string date;
	string value;
	if (line.size() < 12 ||	line[10] != '|' || line[9] != ' ' || line [11] != ' ')
			return false ;
		
		size_t pos = line.find('|');
		date = line.substr(0, pos);
    	value = line.substr(pos + 1);
		if (!checkdate(date) || !checkvalue(value))
			return false ;
		
	return true;
}

void usefile(std::ifstream& file)
{
	string line;
	string date;
	string value;

	std::getline(file, line);

	while(std::getline(file, line))
	{
		if (!checkline(line))
			cout << "invalid lign" << endl;
		else 
		{
			size_t pos = line.find('|');
			date = line.substr(0, pos);
			value = line.substr(pos + 1);
		}
		

	}
}