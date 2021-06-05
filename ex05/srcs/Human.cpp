/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:28:47 by mroux             #+#    #+#             */
/*   Updated: 2021/06/05 16:39:37 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

std::string		Human::identify() const
{
	return (_brain.identify());
}

Brain const&	Human::getBrain() const
{
	return  (_brain);
}
