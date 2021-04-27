/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:11:40 by mroux             #+#    #+#             */
/*   Updated: 2021/04/27 20:17:41 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

void	memoryLeaks()
{
	std::string*	panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

int		main()
{
	memoryLeaks();
	return (0);
}
