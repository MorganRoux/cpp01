/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:21:32 by mroux             #+#    #+#             */
/*   Updated: 2021/06/05 16:41:34 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <cstring>
# include <iostream>
# include "Brain.hpp"

class Human
{
	public:
		Human();
		~Human();
		std::string		identify() const;
		Brain const&	getBrain() const;

	private:
		const Brain		_brain;
};

#endif
