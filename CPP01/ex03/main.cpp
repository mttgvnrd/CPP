/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:42:46 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/05 15:42:48 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.cpp"
#include "HumanA.cpp"
#include "HumanB.cpp"


int main( void )
{
        {
                Weapon club = Weapon("crude spiked club");
                HumanA bob("Bob", club);
                bob.attack();
                club.setType("some other type of club");
                bob.attack();
        }
        {
                Weapon club = Weapon("crude spiked club");
                HumanB jim("Jim");
                jim.attack();
                jim.setWeapon(club);
                jim.attack();
                club.setType("some other type of club");
                jim.attack();
        }
        return 0;
}
