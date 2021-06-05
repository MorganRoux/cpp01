/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:21:51 by mroux             #+#    #+#             */
/*   Updated: 2021/06/05 16:40:55 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <cstring>
# include <sstream>
# include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		std::string	identify() const;

	private:
		int			size;
};

#endif
