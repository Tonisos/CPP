#include "BitcoinExchange.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
		return 1;
		
	//mapping data.csv

	map<string, double> database;

	std::ifstream datafile("data.csv");

    if (!datafile.is_open()) 
	{
        std::cerr << "Error: Could not open the file." << std::endl;
        return 1;
    }

	string line;
	std::getline(datafile, line);

    while (std::getline(datafile, line)) 
	{
		int commaPlace = line.find(",");
		string date = line.substr(0, commaPlace);
		char* end;
		double price = std::strtod(line.substr(commaPlace + 1, line.size()).c_str(), &end);
		// cout << date << "   " << price << endl;
		database.insert(std::make_pair(date, price));
	}
	datafile.close();

	// for (map<string, double>::iterator t = database.begin(); t != database.end(); ++t)
	// 	cout << t->first << " | " << t->second << endl;  

	// answer

	std::ifstream file(argv[1]);

    if (!file.is_open()) {
        std::cerr << "Error: Could not open the file." << std::endl;
        return 1;
    }
	usefile(file, database);
	
	
	



	return 0 ;
}