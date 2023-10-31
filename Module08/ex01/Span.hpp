#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>
#include <climits>

using std::cout;
using std::endl;
using std::vector;

class NumException: public std::exception
{
	const char * what() const throw() {return "not enought element";};	
};

class ToMuchNum: public std::exception
{
	const char * what() const throw() {return "to mutch num";};	
};

class Span {

		private :
			unsigned int _N;
			vector <int> _numbers;


		public :
			Span(int N);
			~Span();
			
			int	shortestSpan();
			int longestSpan();

			void addNumber(int n);
			

			template <typename InputIterator>
			void	addNumbers(InputIterator first, InputIterator last) {
				while (first <= last)
				{
					addNumber(first);
					++first;
				}
	}



};

#endif