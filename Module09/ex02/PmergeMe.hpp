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
#include <vector>
#include <deque>





using std::cout;
using std::endl;
using std::string;
using std::map;
using std::cerr;
using std::vector;
using std::deque;

template <typename Container>
void displayContainer(Container& container)
{
	for (typename Container::iterator it = container.begin(); it != container.end(); ++it)
        std::cout << *it << " ";
	cout << endl;
}

template <typename Container>
void insertionSort(Container& container) {
    int n = container.size();
    for (int i = 1; i < n; i++) {
        int key = container[i];
        int j = i - 1;

        while (j >= 0 && container[j] > key) {
            container[j + 1] = container[j];
            j = j - 1;
        }
        container[j + 1] = key;
    }
}

template <typename Container>
void mergeSort(Container& container, int sizeInsert)
{
	int	mid;
	int	N = container.size();
	if (N < sizeInsert) {
		insertionSort(container);
		return;
	}
	mid = N / 2;
	Container left(container.begin(), container.begin() + mid);
	Container right(container.begin() + mid, container.end());
	mergeSort(left, sizeInsert);
	mergeSort(right, sizeInsert);
	std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
}




template <typename Container>
void fillContainer(Container& container, int argc, char** argv) {
    for (int i = 1; i < argc; ++i) {
        int argAsInt = std::atoi(argv[i]);
        container.push_back(argAsInt);
    }
}

#endif