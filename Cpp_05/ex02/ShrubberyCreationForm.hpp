/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:43:43 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/28 19:25:24 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm	{
	private:
		std::string _target;
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &);
	
	public:

		ShrubberyCreationForm(std::string);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &);
		~ShrubberyCreationForm();

		std::string getTarget() const;

		void execute(Bureaucrat const & executor) const;
};
