/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 04:31:58 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/17 10:48:39 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

void    func1(void)
{   
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    delete tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    delete tmp;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
}

void func2()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    Character* me = new Character("meh");
    AMateria* tmp = NULL;
    tmp = src->createMateria("test");
    me->equip(tmp);
	delete tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    ICharacter* enemy = new Character("enemy");
    me->use(0, *enemy);
    me->use(1, *enemy);
    AMateria *itemIntheFoor = tmp;
    std::cout << "*********************\n";
    me->unequip(1);
	me->use(1, *enemy);
	me->use(0, *enemy);
    delete enemy;
    delete me;
    delete src;
    if (itemIntheFoor)
        delete itemIntheFoor;
}

int main()
{
    func1();
    std::cout << "---------------TEST2-------------" << std::endl;
    func2();
}