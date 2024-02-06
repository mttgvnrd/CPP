/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:44:00 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/05 15:44:02 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
		Weapon		*_gun;
		std::string	_name;
   
    public:
        HumanB(std::string name);
        ~HumanB(void);

        void  attack(void);
		void	setWeapon( Weapon& weapon );

};


#endif