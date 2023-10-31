#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>


using std::cout;
using std::endl;

template <typename T>
const T & max( const T & A, const T & B ) 
{ 
    return A > B ? A : B; 
}

template <typename T>
void swap(T &A,T &B) 
{ 
   	T C;
	C = A;
	A = B;
	B = C;
}

template <typename T>
const T & min( const T & A, const T & B ) 
{ 
    return A < B ? A : B; 
}

#endif