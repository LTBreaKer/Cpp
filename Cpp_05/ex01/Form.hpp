/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:31:51 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/30 14:01:30 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Bureaucrat;

class Form	{
	private:
		const std::string	_name;
		bool		_signed;
		const int	_reqGradeSign;
		const int	_reqGradeExec;
	public:
		Form();
		Form(std::string, const int, const int);
		Form(const Form &);
		Form& operator=(const Form &);
		~Form();

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		std::string getName() const;
		bool	getSigned() const;
		int getGradeSign() const;
		int getGradeExec() const;
		
		void beSigned(const Bureaucrat &);
};

std::ostream & operator<<(std::ostream & out, Form& f);