/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:31:47 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/30 14:15:35 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()	{
	try
	{
		Form	F("whatever", 9, 10);
		Form	N;
		Bureaucrat	B("jonas", 9);
		
		std::cout << B;
		std::cout << "---------------------------" << std::endl;	
		std::cout << F;		
		std::cout << "---------------------------" << std::endl;	
		std::cout << N;
		std::cout << "---------------------------" << std::endl;	
		F.beSigned(B);
		F.beSigned(B);
		std::cout << "---------------------------" << std::endl;	
		std::cout << F;
		std::cout << "---------------------------" << std::endl;	
		B.lowerGrade();
		B.lowerGrade();
		std::cout << "---------------------------" << std::endl;	
		std::cout << B;	
		std::cout << "---------------------------" << std::endl;	
		B.signForm(N);
		B.signForm(F);
	}
    catch(std::exception &exp)
	{
		std::cerr << exp.what() << std::endl;
		return 1;
	}
	
}