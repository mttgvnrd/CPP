/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:48:14 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/05 13:48:16 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*  zombieHorde(int number, std::string name)
{
    Zombie*     horde;

    horde = new Zombie[number];
    for (int i = 0; i < number; i++)
		horde[i].setName(name);
	return horde;
}
