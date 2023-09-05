/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:31:51 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/28 16:50:00 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm	{
	private:
		std::string	_name;
		bool		_signed;
		const int	_reqGradeSign;
		const int	_reqGradeExec;
		AForm();
	public:
		AForm(std::string, const int, const int);
		AForm(const AForm &);
		AForm& operator=(const AForm &);
		~AForm();

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
		class FormNotSigned : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		std::string getName() const;
		bool	getSigned() const;
		int getGradeSign() const;
		int getGradeExec() const;
		
		void beSigned(const Bureaucrat &);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & out, AForm& f);