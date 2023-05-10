#include "Fixed.hpp"

Fixed::Fixed() :_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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

Fixed::Fixed(const int num) : _value(num <<_fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _value((int)roundf(num * (1 << _fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _fractional_bits));
}

int Fixed::toInt(void) const
{
	return ((int)roundf(_value >> _fractional_bits));
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

std::ostream& operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}