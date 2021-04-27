/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:24:08 by mroux             #+#    #+#             */
/*   Updated: 2021/04/27 21:09:53 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <cstring>

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		void		annouce();

	private:
		std::string	_name;
		std::string _type;

};

#endif
