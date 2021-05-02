/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 19:39:15 by mroux             #+#    #+#             */
/*   Updated: 2021/05/02 11:35:25 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool	checkArgs(int argc,  char *argv[])
{
	return (
		argc == 4 &&
		std::string(argv[1]).size() != 0 &&
		std::string(argv[2]).size() != 0 &&
		std::string(argv[3]).size() != 0
	);
}

void 	replace(std::string& str, std::string s1, std::string s2)
{
	size_t index = 0;
	while (true)
	{
		index = str.find(s1, index);
		if (index == std::string::npos)
			break;
		str.replace(index, s1.size(), s2);
		index += s2.size();
	}
}

int		main(int argc, char *argv[])
{
	std::fstream src, dest;
	std::string srcName, buffer, s1, s2;

	if (!checkArgs(argc, argv))
	{
		std::cout << "Parse error";
		return (0);
	}
	srcName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	src.open(srcName, std::ios::in);
	if (!src.is_open())
	{
		std::cout << "Error files";
		return (0);
	}
	dest.open(srcName + ".replace", std::ios::out);
	if (!dest.is_open())
	{
		std::cout << "Error files";
		return (0);
	}
	while (getline(src, buffer))
	{
		replace(buffer, s1, s2);
		dest << buffer << std::endl;
	}
	dest.close();
	src.close();
	return (0);
}
