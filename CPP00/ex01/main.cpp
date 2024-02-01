/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:48:26 by mgiovana          #+#    #+#             */
/*   Updated: 2024/01/24 15:48:32 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phone;
    std::string command;
    static int i = 0;

	std::cout << "---Welcome---\n";
    while (!std::cin.eof())
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): " ;
		std::cin >> command;
		if (std::cin.eof()) 
        break;
		if (command == ("ADD"))
		{
			phone.ContactN[i].add_contact();
			(i == 7) ? i = 0 : i++;
		}
		else if (command == ("SEARCH"))
		{ 
			phone.print_contact();
			phone.find_contact();
		}
		else if (command == ("EXIT"))
			break;
	}
	return 0;
    
}