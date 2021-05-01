/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:28:47 by mroux             #+#    #+#             */
/*   Updated: 2021/05/01 18:38:36 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

std::string	Human::identify()
{
	return (_brain.identify());
}

Brain&		Human::getBrain()
{
	return  (_brain);
}
