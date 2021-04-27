/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:30:42 by mroux             #+#    #+#             */
/*   Updated: 2021/04/27 21:23:00 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::string randomNames[3] = {
		"Eric",
		"Ludovic",
		"Larmina"
	};
	_name = randomNames[rand() % 3];
	_type = "defaulttype";
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{

}

void Zombie::annouce()
{
	std::cout << _name << " (" << _type << ") "
			  << "Braiiiiiiinnnssss ..." << std::endl;
}
