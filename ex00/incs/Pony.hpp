/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 19:11:18 by mroux             #+#    #+#             */
/*   Updated: 2021/04/27 19:46:54 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony
{
	public:
		Pony();
		~Pony();
		void		describe();
		void		run();
		std::string	_name;
};

#endif
