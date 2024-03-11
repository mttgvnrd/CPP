/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:27:32 by mgiovana          #+#    #+#             */
/*   Updated: 2024/03/11 14:27:33 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
            std::string _type;

    public:
            AMateria(std::string const & type);
            virtual ~AMateria();

            std::string const & getType() const;
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);
};

#endif