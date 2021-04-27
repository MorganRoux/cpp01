/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 19:14:13 by mroux             #+#    #+#             */
/*   Updated: 2021/04/27 19:49:57 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(Pony *p_pony)
{
	Pony	pony;

	p_pony = &pony;
	pony.describe();
}

void	ponyOnTheHeap(Pony *p_pony)
{
	Pony	*pony;

	pony = new Pony();
	p_pony = pony;
	pony->describe();
	delete pony;
}

int		main()
{
	Pony	*pony;

	pony = NULL;
	std::cout << "Stack\n";
	ponyOnTheStack(pony);
	pony->run();
	pony->describe();
	std::cout << "Heap\n";
	ponyOnTheHeap(pony);
	pony->run();
	pony->describe();
	return (0);
}
