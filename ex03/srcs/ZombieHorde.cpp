/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:55:19 by mroux             #+#    #+#             */
/*   Updated: 2021/04/27 21:14:01 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	_nZombies = n;
	_zombies = new Zombie[_nZombies];

}

ZombieHorde::~ZombieHorde()
{
	delete [] _zombies;
}

void	ZombieHorde::annouce()
{
	for(int i = 0; i < _nZombies; i++)
		_zombies[i].annouce();
}
