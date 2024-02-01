/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:50:45 by mgiovana          #+#    #+#             */
/*   Updated: 2024/01/24 15:50:46 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::get_contact(int i) 
{
    return contact[i];
}

void    Contact::add_contact()
{
    	std::string data[5] = {	"First Name", "Last Name", 
        "Nickname", "Number", "Darkest Secret"};
        	
        for (int i = 0; i < 5; i++)
	{
		std::cout << "Insert Info " << data[i] << ": ";
		std::cin >> contact[i];
    }
}