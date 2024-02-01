/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:50:13 by mgiovana          #+#    #+#             */
/*   Updated: 2024/01/24 15:50:15 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{
    
}
//se la stringa e piu lunga di 9 caratteri viene messo un .
std::string cut(std::string string) 
{
    if (string.length() > 10)
    {
		string = string.substr(0, 10);
		string[9] = '.';
	}
	return (string);
}

void PhoneBook::find_contact()
{
    int x = 0;
    std::string temp;
    std::string data[5] = {	"First Name", "Last Name", 
        "Nickname", "Number", "Darkest Secret"};
    std::cout << "Insert Contact Index\n";
    std::cin >> temp;
    x = atoi(temp.c_str());
	if (x < 1 || x > 8)
		std::cout << "Invalid Index." << std::endl;
    else if (!ContactN[x - 1].get_contact(0).empty())
		for (int i = 0; i < 5; i++)
			std::cout << data[i] << ": " << ContactN[x - 1].get_contact(i) << std::endl;
}

void PhoneBook::print_contact()
{

    std::string data[4] = {"Index", "First Name", "Last Name", "Nickname"};
    std::cout << "|";
    for (int i = 0; i < 4; i++)
		std::cout << std::right << std::setw(10) << data[i] << "|" ;
        std::cout << std::endl;
    for (int i = 0; i < 8; i++)
    {
        //std::right serve per giustificare il testo a destra
        //std::w imposta la larghezza del campo per l'output successivo su n caratteri
        std::cout << "|" << std::right << std::setw(10) << i + 1 << "|";
		std::cout << std::right << std::setw(10) << cut(ContactN[i].get_contact(0)) << "|";
		std::cout << std::right << std::setw(10) << cut(ContactN[i].get_contact(1)) << "|";
		std::cout << std::right << std::setw(10) << cut(ContactN[i].get_contact(2)) << "|" << std::endl;
    }

}

