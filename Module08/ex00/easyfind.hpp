#pragma once
#include <iostream>
#include <vector>


class myException : public std::exception 
{
    const char *what() const throw() { return "couldn't find the element";}
};

template <typename T>
typename T::iterator easyfind(T cont, int toFind)
{
	typename T::iterator i = std::find(cont.begin(), cont.end(), toFind);
	return (i);
};