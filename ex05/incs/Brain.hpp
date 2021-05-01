/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:21:51 by mroux             #+#    #+#             */
/*   Updated: 2021/05/01 18:42:01 by mroux            ###   ########.fr       */
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
		std::string	identify();

	private:
		int			size;
};

#endif
