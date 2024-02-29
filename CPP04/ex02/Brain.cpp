/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:36:19 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/29 14:36:21 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor" << std::endl;

}

Brain::~Brain()
{
    std::cout << "Default Brain deconstructor" << std::endl;
}

Brain::Brain(const Brain& src)
{
    std::cout << "Brain Copy destructor" << std::endl;
	*this = src;
}

Brain & Brain::operator=( Brain const &src)
{
	if (this != &src)
    {
		int	i = -1;
		while (++i < 100)
			this->ideas[i] = src.ideas[i];
    }
    return *this;
}

