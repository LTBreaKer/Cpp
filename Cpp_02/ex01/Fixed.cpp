/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 03:22:19 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/23 00:17:58 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_fixedValue = 0;
	return ;
}

Fixed::Fixed(const int i)	{
	std::cout << "Int constructor called"	<< std::endl;
	_fixedValue = i  * (1 << _fractBits);
}

Fixed::Fixed(const float i)	{
	std::cout << "Float constructor called" << std::endl;
	_fixedValue = roundf(i * (1 << _fractBits));
}

Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
	return ;
}

Fixed&	Fixed::operator=(const Fixed& orig)	{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedValue = orig.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)	{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const	{
	return (_fixedValue);
}

void	Fixed::setRawBits(int const	raw)	{
	_fixedValue = raw;
	return ;
}

float	Fixed::toFloat(void) const	{
	return ((float)_fixedValue / (1 << _fractBits));
}

int	Fixed::toInt(void) const	{
	return (_fixedValue >> _fractBits);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& f)	{
	out << f.toFloat();
	return out;
}