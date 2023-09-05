/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:45:39 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/28 19:31:11 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void) : _name("Unkown"), _grade(150)	{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)	{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& orig)	{
	*this = orig;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& orig)	{
	if (this == &orig)
		return (*this);
	*this = orig;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)	{
}

std::string Bureaucrat::getName(void) const	{
	return _name;
}

int Bureaucrat::getGrade(void) const {
	return _grade;
}

void	Bureaucrat::raiseGrade(void)	{
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::lowerGrade(void)	{
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(AForm & f)	{
	if (f.getSigned())
	{
		std::cout << _name << " couldn't sign " << f.getName()
				  << " because it's already signed" << std::endl;
		return ;
	}
	if (_grade <= f.getGradeSign())	{
		f.beSigned(*this);
		std::cout << _name << " signed " << f.getName() << std::endl;
	}
	else	{
		std::cout << _name << " couldn't sign " << f.getName()
				  << " because grade it too low" << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)	{
	if (!form.getSigned())
		std::cout << this->_name << " can't execute " << form.getName()
				  << " because it's not signed" << std::endl;
	else if (this->_grade > form.getGradeExec())
		std::cout << this->_name << " can't execute " << form.getName()
				  << " because his grade is too low" << std::endl;
	else	{
		std::cout << this->_name << " executed " << form.getName() << std::endl; 
		form.execute(*this);
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()	{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()	{
	return ("Grade too low");
}

std::ostream &	operator<<(std::ostream & out, Bureaucrat & b)	{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
}