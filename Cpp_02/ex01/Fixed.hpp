/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 03:15:30 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/23 04:12:03 by aharrass         ###   ########.fr       */
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
		Fixed&	operator=(const Fixed& orig);
		~Fixed(void);
		int		getRawBits(void)	const;
		void	setRawBits(int const raw);
		float	toFloat(void)	const;
		int		toInt(void)	const;
		
};

std::ostream&	operator<<(std::ostream& out, const Fixed& f);
