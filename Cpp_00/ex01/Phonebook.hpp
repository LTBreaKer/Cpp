/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:55:04 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/12 04:21:58 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include "./Contact.hpp"
#include <sstream>
#include <limits>
#include <cwctype>
#include <cwchar>
#include <cstdlib>

class Phonebook	{
	
private:

	Contact _contacts[8];
	int			_count;
	int			_oldest;

public:

	Phonebook();
	~Phonebook();
	void	add(void);
	void	search(void) const;
};

#endif