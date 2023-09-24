/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 22:00:08 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/24 06:59:41 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

template<typename T>
int easyfind(T &container, int f)	{
	
	typename T::const_iterator it;
	it = std::find(container.begin(), container.end(), f);
	if (it == container.end())
		throw std::runtime_error("value not found");
	return (*it);
}
