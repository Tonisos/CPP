#include "Span.hpp"


Span::Span(int N) : _N(N)
{

}

Span::~Span()
{

}

int	Span::shortestSpan()
{
	if (_numbers.size() < 2)
		throw NumException();
	int diff = INT_MAX;
	vector<int> tmp = _numbers;

	std::sort(tmp.begin(), tmp.end());
	for (unsigned i = 0; i < tmp.size() - 1; i++)
		diff = std::min(abs(tmp[i + 1] - tmp[i]), diff);
	return (diff);
}

int Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw NumException();
	int min = _numbers[0];
	int max = _numbers[0];

	for(unsigned i = 0; i < _numbers.size(); i++)
	{
		if (_numbers[i] > max)
			max = _numbers[i];
		if (_numbers[i] < min)
			min = _numbers[i];
	}
	return (abs(max - min));

}

void Span::addNumber(int n)
{
	if (_numbers.size() >= _N)
		throw(ToMuchNum());
	else
		_numbers.push_back(n);
}

