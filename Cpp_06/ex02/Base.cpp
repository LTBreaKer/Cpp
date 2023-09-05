/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:38:30 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/05 18:56:16 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){
}

Base * generate(void)	{
	srand(time(0));
	int rando = rand();
	rando = rando % 3 + 1;
	switch(rando)	{
		case 1:
			return (new A);
		case 2:
			return (new B);
		case 3:
			return (new C);
		default:
			return 0;
	}
	return 0;
}

void identify(Base* p)	{
	A *a = dynamic_cast<A*>(p);
	if (!a)	{ //Not of type A;
		B *b = dynamic_cast<B*>(p);
		if (!b)	{ //Not of type B
			C *c = dynamic_cast<C*>(p);
			if (!c)	{ //Not of type C
				std::cout << "Type not supported";
			}
			std::cout << "C";
			
		}
		else
			std::cout << "B";
	}
	else
		std::cout << "A";
	std::cout << std::endl;
}

void identify(Base& p)	{
	try {
		A	&a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)	{ //Not of type A
		try	{
			B	&b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "B" << std::endl;
		}
		catch (std::exception &f)	{ //Not of type B
			try	{
				C	&c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "C" << std::endl;
			}
			catch (std::exception &g)	{ //Not of type C
				std::cout << "Type not supported" << std::endl;
			}
		}
	}
}