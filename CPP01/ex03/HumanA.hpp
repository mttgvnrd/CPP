/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:43:40 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/05 15:43:45 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
		Weapon&		_randomWeapon;
		std::string	_name;

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);

        void  attack(void);
		void	setWeapon( Weapon& weapon );

};


#endif
