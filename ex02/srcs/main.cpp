/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:09:09 by mroux             #+#    #+#             */
/*   Updated: 2021/06/05 16:31:33 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
	Zombie *z1;
	ZombieEvent ze;

	z1 = ze.newZombie("zombie1");
	z1->annouce();
	ze.setZombieType("Gros Zombie");
	ze.randomChump();
	ze.randomChump();
	ze.randomChump();
	ze.setZombieType("Petit Zombie");
	ze.randomChump();
	delete(z1);
	return (0);
}
