/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:30:21 by mroux             #+#    #+#             */
/*   Updated: 2021/06/05 16:42:49 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	size = 10;
}

Brain::~Brain()
{

}

std::string Brain::identify() const
{
	std::ostringstream ss;
	ss << (void const *)this;
	return (ss.str());
}
