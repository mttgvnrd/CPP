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

int     main(int argc, char **argv)
{
    std::string name1 = "Red";
    std::string name2 = "Blue";
    
    (void)argv;
    (void)argc;
	ClapTrap Red(name1);
	ClapTrap Blue(name2);
    Red.attack(name2);
    Blue.takeDamage(5);
	Blue.beRepaired(5);
}