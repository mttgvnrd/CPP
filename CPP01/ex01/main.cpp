/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:47:34 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/05 13:47:35 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    int hSize;
    Zombie*  horde;
    std::string name;
    std::string size;

    (void)argv;
    if (argc > 1)
        return (1);
    while (!std::cin.eof())
    {
            std::cout << "Enter the size of the horde" << std::endl;
            std::getline(std::cin, size);
            hSize = atoi(size.c_str());
            if (std::cin.eof())
			    return (1);
            else if (hSize == 0)
			    std::cout << "Invalid input" << std::endl;
            else
                break;
    }
    while (!std::cin.eof())
    {
            std::cout << "Enter the Zombie's name" << std::endl;
            std::getline(std::cin, name);
            if (std::cin.eof())
				return (1);
			else if (!name.compare(""))
				std::cout << std::endl << "Please insert a valid name." << std::endl;
            else
                break;
    }
    horde = zombieHorde(hSize, name);
    for (int i = 0; i < hSize; i++)
		horde[i].announce();
	delete[](horde);
	return 0;
}