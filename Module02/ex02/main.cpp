#include "Fixed.hpp"



int	main( void )
{
	Fixed a(5);
	// Fixed b(4);
	// cout << (a<b) << endl;
	cout << a << endl;
	cout <<--a << endl;
	cout << a << endl;

	Fixed const b( Fixed( 5.42f ) * Fixed( 2 ) );

	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b + " << a - b << std::endl;

	std::cout << "a >= b = " << (a >= b) << std::endl;
	std::cout << "a < b = " << (a < b) << std::endl;
	std::cout << "a <= b = " << (a <= b) << std::endl;

	std::cout << "max(a, b) = " << Fixed::max( a, b ) << std::endl;
	cout << "min(a, b) = " << Fixed::min(a, b) << endl;

	return (0);
}