/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:35:38 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/28 19:25:19 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <fstream>
#include <cstdlib>

class RobotomyRequestForm : public AForm	{
	private:
		std::string _target;
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &);
	
	public:

		RobotomyRequestForm(std::string);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &);
		~RobotomyRequestForm();

		std::string getTarget() const;
		
		void execute(Bureaucrat const & executor) const;
};