#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <cstdlib>
#include <iterator>
#include <algorithm>



using std::cout;
using std::endl;
using std::string;
using std::map;

void usefile(std::ifstream& file, map<string, double> database);

#endif