/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 19:10:08 by mroux             #+#    #+#             */
/*   Updated: 2021/05/01 19:32:16 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <cstring>
# include <iostream>

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		void		attack();

	private:
		std::string	_name;
		Weapon&		_weapon;
};

#endif
