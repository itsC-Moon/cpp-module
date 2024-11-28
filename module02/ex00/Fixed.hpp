
#ifndef Fixed_H
# define Fixed_H

class Fixed
{
	private:
		static const int	fractional  = 8;
		int					rawBits;
	public:
		int getRawBits(void) const ;
		void setRawBits(int const raw);

		Fixed();
		~Fixed();
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &other);
};

#endif
