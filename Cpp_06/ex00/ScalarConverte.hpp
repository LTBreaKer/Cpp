/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:04:51 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/05 17:36:30 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <climits>
#include <cmath>

class ScalarConverte	{
	private:
		static char		_c;
		static int		_i;
		static float	_f;
		static double	_d;
		ScalarConverte();
		ScalarConverte(const ScalarConverte&);
		ScalarConverte& operator=(const ScalarConverte&);
		~ScalarConverte();
	public:
		static void	convert(const std::string &);
		static void is_char(const std::string &);
		static void is_int(const std::string &);
		static void is_float(const std::string &);
		static void is_double(const std::string &);
};