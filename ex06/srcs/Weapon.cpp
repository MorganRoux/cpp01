/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 19:05:52 by mroux             #+#    #+#             */
/*   Updated: 2021/05/01 19:30:38 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{

}

std::string const&	Weapon::getType()
{
	return (_type);
}

void				Weapon::setType(std::string type)
{
	_type = type;
}
