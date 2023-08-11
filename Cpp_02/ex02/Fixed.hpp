/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 03:15:30 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/08 22:04:46 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed	{
	private:

		int								_fixedValue;
		static const int	_fractBits = 8;

	public:
	
		Fixed(void);
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed& orig);
		~Fixed(void);
		
		Fixed&	operator=(const Fixed& orig);
		
		int		getRawBits(void)	const;
		void	setRawBits(int const raw);
		float	toFloat(void)	const;
		int		toInt(void)	const;
		
		bool	operator<(const Fixed& comp) const;
		bool	operator>(const Fixed& comp) const;
		bool	operator>=(const Fixed& comp) const;
		bool	operator<=(const Fixed& comp) const;
		bool	operator!=(const Fixed& comp) const;
		bool	operator==(const Fixed& comp) const;
		
		Fixed	operator+(const Fixed& add) const;
		Fixed	operator-(const Fixed& minus) const;
		Fixed	operator*(const Fixed& times) const;
		Fixed	operator/(const Fixed& div) const;
		
		Fixed& operator++();
		Fixed	operator++(int);
		Fixed& operator--();
		Fixed	operator--(int);
		
		static Fixed&	min(Fixed& first, Fixed& second);
		static Fixed&	max(Fixed& first, Fixed& second);
		static const Fixed&	min(const Fixed& first, const Fixed& second);
		static const Fixed&	max(const Fixed& first, const Fixed& second);

};

std::ostream&	operator<<(std::ostream& out, const Fixed& f);
