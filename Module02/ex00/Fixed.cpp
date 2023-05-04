#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	cout << "Default constructor called" << endl;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed::Fixed(Fixed const& toCopy)
{
	cout << "Copy constructor called" << endl;
	*this = toCopy;
}

Fixed& Fixed::operator=(Fixed const& toCopy)
{
	cout << "Copy assignment operator called" << endl;
	if (this != &toCopy)
		_value = toCopy._value;
	return *this;

}

int	Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
	_value = raw;
}


