#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{

}

Fixed::~Fixed()
{


}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw
}