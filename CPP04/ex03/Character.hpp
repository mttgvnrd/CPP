/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:27:50 by mgiovana          #+#    #+#             */
/*   Updated: 2024/03/11 14:27:51 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
            std::string _name;
            AMateria* slots[4];
            AMateria* trash[100];
            Character();
    public:
    	    Character(const std::string& setName);
	        ~Character();
	        Character(const Character& src);
	        Character& operator=(const Character& src);
            std::string const & getName() const;
            
            void use(int idx, ICharacter& target);
            void equip(AMateria* stuff);
            void unequip(int idx);

};

#endif