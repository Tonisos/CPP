#pragma once
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <iterator>





class myException : public std::exception 
{
    const char *what() const throw() { return "couldn't find the element";}
};

template <typename T>
typename T::iterator easyfind(T cont, int toFind)
{
	typename T::iterator i = std::find(cont.begin(), cont.end(), toFind);
	if (i)
	return (i);
};