/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:54:28 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/21 15:54:30 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int     main(int argc, char **argv)
{
    std::string name1 = "Red";
    std::string name2 = "Blue";
    std::string name3 = "Green";
    std::string name4 = "Yellow";
    std::string name5 = "Orange";

	ClapTrap att(name1);
	ClapTrap def(name2);
    ScavTrap scav(name3);
    ScavTrap scav2(name4);
    FragTrap frag(name5);
    
    (void)argv;
    (void)argc;
    scav.guardGate();
    att.attack(name3);
    att.attack(name2);
    scav.takeDamage(0);
    def.takeDamage(0);
    scav.attack(name4);
    scav2.takeDamage(20);
    scav2.beRepaired(20);
    frag.highFivesGuys();
}