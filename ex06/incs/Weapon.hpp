/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 19:02:22 by mroux             #+#    #+#             */
/*   Updated: 2021/05/01 19:29:15 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <cstring>
# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		std::string const&	getType();
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif
