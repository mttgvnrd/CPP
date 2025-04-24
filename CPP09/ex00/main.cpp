/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:51:18 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/18 12:51:20 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << "Error, try ./Bitcoin_Exchange input.txt" << std::endl;
	else
	{
		const std::string input_file = av[1];
		const std::string data_file_name = "./data.csv";
		try{
			BitcoinExchange btc(data_file_name, input_file);
			btc.exchanger();
		}
		catch(const std::exception& e){ 
			std::cerr << e.what() << std::endl;
		}
	}	
	return 0;
}