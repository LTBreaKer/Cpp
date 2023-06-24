/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:27:07 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/17 18:58:23 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};

Zombie*	newZombie( std::string name );
void		randomChump( std::string name );
#endif