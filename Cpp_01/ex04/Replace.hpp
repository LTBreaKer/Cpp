/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:17:00 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/19 12:30:11 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <fstream>

class	Replace	{
	private:

		std::string	_FileName;
		std::string	_s1;
		std::string	_s2;
		std::string _FileContent;
		std::string	_NewFileContent;
		std::string	_NewFileName;

	public:

		Replace(std::string file_name, std::string s1, std::string s2);
		~Replace(void);
		void	readFile(void);
		bool	search(size_t i) const;
		void	replaceContent(void);
		void	writeNewFile(void) const;
};