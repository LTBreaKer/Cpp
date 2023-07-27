/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 03:22:19 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/18 01:32:22 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed(void)	{
	_fixedValue = 0;
	return ;
}

Fixed::Fixed(const int i)	{
	_fixedValue = i  * (1 << _fractBits);
}

Fixed::Fixed(const float i)	{
	_fixedValue = roundf(i * (1 << _fractBits));
}

Fixed::Fixed(const Fixed &original)	{
	*this = original;
	return ;
}

Fixed&	Fixed::operator=(const Fixed& orig)	{
	this->_fixedValue = orig.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)	{
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

bool Fixed::operator<(const Fixed& comp) const	{
	if (this->getRawBits() < comp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed& comp) const	{
	if (this->getRawBits() > comp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& comp) const	{
	if (this->getRawBits() >= comp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& comp) const	{
	if (this->getRawBits() <= comp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& comp) const	{
	if (this->getRawBits() != comp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& comp) const	{
	if (this->getRawBits() == comp.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed& add) const	{
	Fixed res;

	res.setRawBits(roundf((this->toFloat() + add.toFloat()) * (1 << _fractBits)));
	return (res);
}

Fixed	Fixed::operator-(const Fixed& minus) const	{
	Fixed res;

	res.setRawBits(roundf((this->toFloat() - minus.toFloat()) * (1 << _fractBits)));
	return (res);
}

Fixed	Fixed::operator*(const Fixed& times) const	{
	Fixed res;

	res.setRawBits(roundf((this->toFloat() * times.toFloat()) * (1 << _fractBits)));
	return (res);
}

Fixed	Fixed::operator/(const Fixed& div) const	{
	Fixed res;

	res.setRawBits(roundf((this->toFloat() / div.toFloat()) * (1 << _fractBits)));
	return (res);
}

Fixed&	Fixed::operator++()	{
	setRawBits(getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)	{
	Fixed tmp(*this);
	setRawBits(getRawBits() + 1);
	return tmp;
}

Fixed&	Fixed::operator--()	{
	setRawBits(getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator--(int)	{
	Fixed tmp(*this);
	setRawBits(getRawBits() - 1);
	return (tmp);
}

Fixed& Fixed::min(Fixed& first, Fixed& second)	{
	if (first < second)
		return (first);
	return (second);
}

Fixed& Fixed::max(Fixed& first, Fixed& second)	{
	if (first > second)
		return (first);
	return (second);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second)	{
	if (first < second)
		return (first);
	return (second);
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second)	{
	if (first > second)
		return (first);
	return (second);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& f)	{
	out << f.toFloat();
	return out;
}