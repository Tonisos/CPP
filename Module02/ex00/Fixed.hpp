#include <iostream>

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
		Fixed& operator=(Fixed const& toCopy);


		int		getRawBits (void) const;
		void	setRawBits(int const raw);



};