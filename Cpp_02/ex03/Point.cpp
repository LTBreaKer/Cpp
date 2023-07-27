/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 03:12:59 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/16 01:51:26 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Point.hpp"

Point::Point(void): x(0), y(0)	{
}

Point::Point(const float x1, const float y1): x(x1), y(y1){
}

Point::Point(const Point& original): x(original.getX()), y(original.getY())	{
}

Point::~Point(void)	{
}

Point&	Point::operator=(const Point& original)	{
	(void)original;
	return (*this);
}

Fixed Point::getX(void) const	{
	return (this->x);
}

Fixed Point::getY(void) const	{
	return (this->y);
}