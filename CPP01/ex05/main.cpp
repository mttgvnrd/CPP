/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:48:55 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/08 14:48:58 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    std::string input;
    Harl    obj;
    
    if (argc != 1)
       {
        return 1;
       } 
	while (!std::cin.eof())
	{
		std::cout << std::endl << "Please insert a complain level: ";
		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare(""))
			continue;
		for (size_t i = 0; i < input.length(); i++)
			input[i] = std::toupper(input[i]);
		if (!input.compare("EXIT"))
			break ;
		obj.complain(input);
	}
	(void)argv;
	return 0;
}