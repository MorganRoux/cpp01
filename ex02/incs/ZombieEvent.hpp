/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:24:05 by mroux             #+#    #+#             */
/*   Updated: 2021/06/05 16:31:24 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
# include <cstring>
# include "Zombie.hpp"
# include "stdlib.h"
class ZombieEvent
{
	public:
		ZombieEvent();
		Zombie*		newZombie (std::string name);
		void		randomChump();
		void		setZombieType(std::string type);

	private:
		std::string _zombieType;
		std::string _randomNames[3];
};

#endif
