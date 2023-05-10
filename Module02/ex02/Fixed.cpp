#include "Fixed.hpp"


// init  .............................................................................

Fixed::Fixed() :_value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& toCopy)
{
	// cout << "Copy constructor called" << endl;
	*this = toCopy;
}

Fixed& Fixed::operator=(Fixed const& toCopy)
{
	// cout << "Copy assignment operator called" << endl;
	if (this != &toCopy)
		_value = toCopy._value;
	return *this;
}

Fixed::Fixed(const int num) : _value(num <<_fractional_bits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _value((int)roundf(num * (1 << _fractional_bits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

//read and convert .............................................................................


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
	// std::cout << "getRawBits member function called" << std::endl;
	return(_value);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

std::ostream& operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}

// ARITHMETIC OPERATORS .............................................................................

Fixed Fixed::operator+(Fixed &other)
{
	float result = toFloat() + other.toFloat();
	return (Fixed(result));
}

Fixed Fixed::operator-(Fixed &other)
{
	float result = toFloat() - other.toFloat();
	return (Fixed(result));
}

Fixed Fixed::operator*(Fixed &other)
{
	float result = toFloat() * other.toFloat();
	return (Fixed(result));
}

Fixed Fixed::operator/(Fixed &other)
{
	float result = toFloat() / other.toFloat();
	return (Fixed(result));
}

// INCREMENT/DECREMENT OPERATORS ..................................................................

Fixed& Fixed::operator--(void)
{
	--(this->_value);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed copy (*this);
	--(this->_value);
	return (copy);
}

Fixed& Fixed::operator++(void)
{
	++(this->_value);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed copy (*this);
	++(this->_value);
	return (copy);
}

// COMPARISON OPERATORS..............................................................................

Fixed Fixed::operator<(Fixed &other)
{
	return (this->_value < other._value);
}

Fixed Fixed::operator<=(Fixed &other)
{
	return (this->_value <= other._value);
}

Fixed Fixed::operator==(Fixed &other)
{
	return (this->_value == other._value);
}

Fixed Fixed::operator>(Fixed &other)
{
	return (this->_value > other._value);
}

Fixed Fixed::operator>=(Fixed &other)
{
	return (this->_value >= other._value);
}
Fixed Fixed::operator!=(Fixed &other)
{
	return (this->_value != other._value);
}


//MIN and MAX....................................................................................................

Fixed Fixed::min(Fixed &f1,  Fixed &f2)
{
	if (f1._value <= f2._value)
		return(f1.toFloat());
	return (f2.toFloat());
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1._value <= f2._value)
		return(f1);
	return (f2);
}


const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1._value >= f2._value)
		return(f1);
	return (f2);

}

Fixed Fixed::max(Fixed &f1,  Fixed &f2)
{
	if (f1._value >= f2._value)
		return(f1.toFloat());
	return (f2.toFloat());
}