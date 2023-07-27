/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 01:04:24 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/16 00:13:26 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

class Point	{
	private:

		Fixed const	x;
		Fixed const	y;

	public:

		Point(void);
		Point(const float x1, const float y1);
		Point(const Point& original);
		~Point(void);
		
		Point&	operator=(const Point& original);
		
		Fixed	getX(void) const;
		Fixed getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
