/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 19:13:44 by mroux             #+#    #+#             */
/*   Updated: 2021/06/05 16:50:15 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
	_name(name), _weapon(NULL)
{

}

void	HumanB::attack()
{
	std::cout << (_weapon == NULL ? "Can't attack without a weapon" : _name + " attacks with his " + _weapon->getType()) << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
};
