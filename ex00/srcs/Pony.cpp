/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 19:12:21 by mroux             #+#    #+#             */
/*   Updated: 2021/04/27 19:49:07 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	_name = "unknown";
}

Pony::~Pony()
{

}

void	Pony::describe()
{
	std::cout << "I'm a Pony !\n" << "My name is " << _name << "\n";
}

void	Pony::run()
{
	std::cout << "Pony pony run run\n";
}
