#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include <ctime>
#include <stack>
#include <cstring>
#include <climits>





using std::cout;
using std::endl;
using std::string;
using std::map;
using std::cerr;


template <typename Container>
void fillContainer(Container& container, int argc, char** argv) {
    for (int i = 0; i < argc; ++i) {
        int argAsInt = std::atoi(argv[i]);
        container.push_back(argAsInt);
    }
}


#endif