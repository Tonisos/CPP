#include "BitcoinExchange.hpp"

bool checkdate(string date)
{
	if (date.size() != 11 || date[4] != '-' || date[7]!= '-')
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

	if (year == 2016 || year || 2020)
	
	if (std::sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3) 
        return (std::cout << "Error: not a valid date => " << date << std::endl, false);
	
	if (year > 2023 || year < 1900 || month < 1 || month > 12 || day < 1 || day > 31)
		return (std::cout << "Error: not a valid date => " << date << std::endl, false);
	return true;
}

bool checkvalue(string value)
{
	double dvalue;
	if (std::sscanf(value.c_str(), "%lf", &dvalue) != 1)
		return false;
	if (dvalue <= 0 || dvalue >= 1000)	
		return false;
	return true;
}

bool checkline(string line)
{
	
	string date;
	string value;
	if (line.size() < 12 ||	line[11] != '|' || line[10] != ' ' || line [12] != ' ')
			return false ;
		
		size_t pos = line.find('|');
		date = line.substr(0, pos);
    	value = line.substr(pos + 1);
		if (!checkdate(date) || !checkvalue(value))
			return false ;
	return true;
}

int	getyear(string date)
{
	return (atoi(date.substr(0, 4).c_str()));
}

int getmonth(string date)
{
	return (atoi(date.substr(5, 2).c_str()));
}
int getday(string date)
{
	return (atoi(date.substr(8, 2).c_str()));
}

void printexchange(string date, string value, map<string, double> database)
{
	int year;
	int month;
	int	day;
	double dvalue;

	std::sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
	std::sscanf(value.c_str(), "%lf", &dvalue);
	int counter = 0;
	 for (std::map<std::string, double>::iterator it = database.begin(); it != database.end(); ++it) 
	 {
		counter++;
        if (getyear(it->first) == year && getmonth(it->first) == month && getday(it->first) == day)
		{
			cout << date << " => "<< value << " = "<< dvalue * it->second <<endl;
			return;
		}
		if (getyear(it->first) == year &&  getmonth(it->first) == month && getday(it->first) > day)
		{
					
			counter--;
			for (std::map<std::string, double>::iterator it = database.begin(); it != database.end(); ++it)
			{
				counter --;
				if (counter == 0)
				{
					cout << date << " => "<< value << " = "<< dvalue * it->second <<endl;
					return;
				}
			}
		}
		if (getyear(it->first) == year &&  getmonth(it->first) > month )
		{
			
			counter--;
			for (std::map<std::string, double>::iterator it = database.begin(); it != database.end(); ++it)
			{
				counter --;
				if (counter == 0)
				{
					cout << date << " => "<< value << " = "<< dvalue * it->second <<endl;
					return;
				}
			}
		}
		if (getyear(it->first) > year)
		{
			counter--;
			for (std::map<std::string, double>::iterator it = database.begin(); it != database.end(); ++it)
			{
				counter --;
				if (counter == 0)
				{
					cout << dvalue * it->second <<endl;
					return;
				}
			}
		}

	 }

}

void usefile(std::ifstream& file, map<string, double> database)
{
	string line;
	string date;
	string value;
	(void) database;

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
			printexchange(date, value, database);
		}
		

	}
}