/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:22:53 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/10 15:51:02 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

template<typename T, typename T3>
void	iter(T a, size_t b, T3 c)	{
	for(size_t i = 0; i < b; i++)	{
		c(a[i]);
	}
}