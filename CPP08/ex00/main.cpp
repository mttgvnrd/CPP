/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:37:40 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/17 11:37:42 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
	std::vector<int> v;
    std::list<int> l;

	for (int i = 0; i < 10; i++)
    {
		v.push_back(i);
        l.push_back(i);
    }

	try
	{
		std::cout << "Value (vector) : ";
		std::cout << *easyfind(v, 2) << std::endl;
        std::cout << *easyfind(v, -1) << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    try
	{
		std::cout << "Value (list) : ";
		std::cout << *easyfind(l, 3) << std::endl;
        std::cout << *easyfind(l, 11) << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}
