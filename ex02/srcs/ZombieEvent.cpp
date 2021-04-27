/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:34:23 by mroux             #+#    #+#             */
/*   Updated: 2021/04/27 20:57:31 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	_zombieType = "default type";
}

void	ZombieEvent::setZombieType(std::string zombieType)
{
	_zombieType = zombieType;
}

Zombie*	ZombieEvent::newZombie (std::string name)
{
	Zombie*	p_zombie;

	p_zombie = new Zombie(name, _zombieType);
	return (p_zombie);
}

Zombie*	ZombieEvent::randomChump()
{
	Zombie*	p_zombie;
	std::string	randomName;

	randomName = _randomNames[rand() % 3];
	p_zombie = newZombie(randomName);
	p_zombie->annouce();
	return (p_zombie);
}
