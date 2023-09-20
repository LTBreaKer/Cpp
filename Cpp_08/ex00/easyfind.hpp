/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 22:00:08 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/16 19:15:10 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

template<typename T>
typename T::const_iterator easyfind(T &container, int f)	{
	typename T::const_iterator it;
	it = std::find(container.begin(), container.end(), f);
	if (it == container.end())
		throw std::runtime_error("Not found");
	return (it);
}
