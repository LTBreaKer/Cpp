/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:43:03 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/30 16:33:31 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <stack>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <exception>

void	populateStack(std::stack<int> &, std::string);
void	calculate(std::stack<int> &, char);