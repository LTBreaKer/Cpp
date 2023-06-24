/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:58:01 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/17 18:39:19 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
	private:
		int	_index;
		std::string _first_name;		
		std::string _last_name;		
		std::string _nickname;		
		std::string _phone_number;
		std::string _dark_secret;
	public:
		Contact();
		~Contact();
		void	fill_element(std::string prompt, std::string &var, int check);
		void	fill(int count);
		void	print(void) const;
		void	summary(void) const;
};

#endif