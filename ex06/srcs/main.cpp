/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 19:27:02 by mroux             #+#    #+#             */
/*   Updated: 2021/05/01 19:34:44 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon club("crude spiked club");
    Weapon dagger("dagger");

    HumanA bob("Bob", club);
    bob.attack();
    club.setType("other type of club");
    bob.attack();

    HumanB janett("Janett");
    janett.setWeapon(dagger);
    janett.attack();
    dagger.setType("sword");
    janett.attack();

    return (0);
}
