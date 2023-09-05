/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:31:47 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/30 12:22:48 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()	{
{
    try
    {
        Bureaucrat  B("john", 1);
        Bureaucrat  C(B);
        std::cout << "name: " << B.getName() << std::endl;
        std::cout << "grade: " << B.getGrade() << std::endl;

        std::cout << "name: " << C.getName() << std::endl;
        std::cout << "grade: " << C.getGrade() << std::endl;
        std::cout << B;
        std::cout << C;
        B.lowerGrade();
        B.lowerGrade();
        std::cout << B;
        std::cout << "grade: " << B.getGrade() << std::endl;
        
        C.raiseGrade();
        std::cout << "grade: " << C.getGrade() << std::endl;
    }
    catch(std::exception &exp)
    {
        std::cerr << exp.what() << std::endl;
        return 1;
    }
}
	
}