/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 01:04:48 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/14 01:11:27 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain	{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain& orig);
		Brain& operator=(const Brain& orig);
		~Brain(void);
};