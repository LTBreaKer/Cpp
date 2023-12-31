/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:46:21 by codespace         #+#    #+#             */
/*   Updated: 2023/09/10 15:16:31 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	swap(T &a, T &b)	{
	T tmp = a;
	
	a = b;
	b = tmp;
}

template<typename T>
T	min(T &a, T &b)	{
	return(a < b ? a: b);
}

template<typename T>
T	max(T &a, T &b)	{
	return(a > b ? a: b);
}
