/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:02:21 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/23 15:02:23 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string& name);
        ScavTrap(ScavTrap const &src);

		ScavTrap& operator=(const ScavTrap& other);

        void guardGate() const;
        void attack(const std::string& target);

        
};

#endif
