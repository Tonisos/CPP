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

	//quelle jour somme nous

	time_t now = time(0);
	tm *localTime = localtime(&now);

	int tyear = localTime->tm_year + 1900;
	int tmonth = localTime->tm_mon + 1;
	int tday = localTime->tm_mday;


	//

	if (std::sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3) 
        return (std::cout << "Error: not a valid date => " << date << std::endl, false);
	
	if (tyear < year || (tyear == year && tmonth < month) || (tyear == year && tmonth == month && tday < day))
        return (std::cout << "Cannot see in the future => " << date << std::endl, false);
	


	if ((month == 2 || month == 4 || month == 6 || month == 9 || month == 11) && day == 31) 
		return (std::cout << "only 30 days in this month  => "<< date << std::endl, false);

	if ((year != 2016 && year != 2020) && (month == 2 && day == 29))
		return (std::cout << "not a bisextile year => " << date << std::endl, false);
	if (month < 1 || month > 12 || day < 1 || day > 31)
		return (std::cout << "Error: not a valid date => " << date << std::endl, false);
	
	if (year < 2009 || (year == 2009 && month == 1 && day == 1))
		return (std::cout << "date must be after 2009-01-01 => " << date << std::endl, false);
	
	return true;
}

bool checkvalue(string value)
{
	double dvalue;
	if (std::sscanf(value.c_str(), "%lf", &dvalue) != 1)
		return (std::cout << "invalid value"<< std::endl, false);
	if (dvalue <= 0 || dvalue >= 1000)	
		return (std::cout << "value must be between 0 and 1000 "<< std::endl, false);
	return true;
}

bool checkline(string line)
{
	
	string date;
	string value;
	if (line.size() < 12 ||	line[11] != '|' || line[10] != ' ' || line [12] != ' ')
	{
		return (std::cout << "format : YYYY-MM-DD | value"<< std::endl, false);
	}

		
	size_t pos = line.find('|');
	date = line.substr(0, pos);
    value = line.substr(pos + 1);
	if (!checkdate(date) || !checkvalue(value))
		return false;
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
		else if (getyear(it->first) == year &&  getmonth(it->first) == month && getday(it->first) > day)
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
		else if (getyear(it->first) == year &&  getmonth(it->first) > month )
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
		else if (getyear(it->first) > year)
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
		else if (year > 2022 || (year == 2022 && month > 03) || (year == 2022 && month == 03 && day > 29))
		{
			std::map<string, double>::iterator last = database.end();
			--last;
			cout << date << " => "<< value << " = "<< dvalue * last->second <<endl;
			return;
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
	if (line != "date | value")
	{
		cout << "the first line should be <date | value>"<< endl;
		return ;
	}

	while(std::getline(file, line))
	{
		if (!checkline(line))
		{
			// cout << "invalid lign" << endl;
			// break;
		}
		else 
		{
			size_t pos = line.find('|');
			date = line.substr(0, pos);
			value = line.substr(pos + 1);
			printexchange(date, value, database);
		}
		

	}
}