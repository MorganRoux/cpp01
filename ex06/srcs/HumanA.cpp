/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 19:13:44 by mroux             #+#    #+#             */
/*   Updated: 2021/05/01 19:33:55 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):
	_name(name), _weapon(weapon)
{

}

void	HumanA::attack()
{
	std::cout << _name + " attacks with his " + _weapon.getType() << std::endl;
}
