#include <iostream>
#include <math.h>

using std::cout;
using std::endl;

class Fixed
{
	private :
		int					_value;
		static const int	_fractional_bits = 8;


	public :
		Fixed();
		~Fixed();
		Fixed(Fixed const& toCopy);
		Fixed &operator=(Fixed const& toCopy);
		Fixed(const int num);
		Fixed(const float num);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
		float 	toFloat( void ) const;
		int 	toInt( void ) const;

		Fixed operator+(Fixed const &other) const;
		Fixed operator-(Fixed const &other) const;
		Fixed operator*(Fixed const &other) const;
		Fixed operator/(Fixed const &other) const;

		Fixed& operator--(void);
		Fixed operator--(int);
		Fixed &operator++(void);
		Fixed operator++(int);

		Fixed operator<(Fixed const &other) const;
		Fixed operator<=(Fixed const &other) const;
		Fixed operator>(Fixed const &other) const;
		Fixed operator>=(Fixed const &other) const;
		Fixed operator==(Fixed const &other) const;
		Fixed operator!=(Fixed const &other) const;

		static Fixed min(Fixed &f1,  Fixed &f2);
		static Fixed max(Fixed &f1,  Fixed &f2);
		static const Fixed& min(const Fixed&f1, const Fixed&f2);
		static const Fixed& max(const Fixed&f1, const Fixed&f2);


};

std::ostream& operator<<(std::ostream &out, Fixed const &fixed);
