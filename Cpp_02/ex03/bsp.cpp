/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 23:00:52 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/16 00:05:58 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Point.hpp"

Fixed	triangleArea(Point const a, Point const b, Point c)	{
	Fixed area;
	
	area =	a.getX() * (b.getY() - c.getY())
				+ b.getX() * (c.getY() - a.getY())
				+ c.getX() * (a.getY() - b.getY());
	if (area < Fixed(0))
		area = area * Fixed(-1);
	return area;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)	{
	Fixed abc = triangleArea(a, b, c);
	Fixed apc = triangleArea(a, point, c);
	Fixed abp = triangleArea(a, b, point);
	Fixed bcp = triangleArea(b, c, point);
	Fixed zero(0);

	if (abc == zero)	{
		std::cout << "Error: abc is not a triangle" << std::endl;
		exit(0);
	}
	if (apc != zero && abp != zero && bcp != zero)	{
		if (abc == apc + abp + bcp)
			return true;
	}
	return false;
}