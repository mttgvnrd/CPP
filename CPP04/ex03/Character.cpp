/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:27:44 by mgiovana          #+#    #+#             */
/*   Updated: 2024/03/11 14:27:46 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

Character::Character(){
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->trash[i] = NULL;
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i])
		{
			delete this->slots[i];
			this->slots[i] = NULL;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (this->trash[i])
		{
			delete this->trash[i];
			this->trash[i] = NULL;
		}
	}
}

Character::Character(const Character& src)
{
	*this = src;
}

Character& Character::operator=(const Character& src)
{
	if (this != &src)
	{
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
			this->slots[i] = src.slots[i]->clone();
	}
	return *this;
}


Character::Character(const std::string& setName) : _name(setName)
{
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->trash[i] = NULL;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* stuff)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->slots[i])
		{
			this->slots[i] = stuff;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	static int count = 0;

	if (this->slots[idx])
	{
		this->trash[count++] = this->slots[idx];
		this->slots[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->slots[idx])
		this->slots[idx]->use(target);
}