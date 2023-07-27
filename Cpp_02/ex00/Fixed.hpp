/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 03:45:17 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/13 21:56:49 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
  private:
	
		int _fixed_value;
		static const int _fract_bits = 8;

  public:
	
		Fixed(void);
		Fixed(const Fixed &original);
		Fixed&	operator=(const Fixed& orig);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
};
