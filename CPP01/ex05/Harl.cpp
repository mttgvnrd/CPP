/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:49:16 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/08 14:49:18 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"


Harl::Harl(void)
{
    return;
}

Harl::~Harl(void)
{
    return;
}

void Harl::complain(std::string level){

	void	( Harl::*funtions[4] )( ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string	commands[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int i = -1;

	while (++i < 4 && level.compare(commands[i]))
		continue;
	if (i < 4)
		(this->*funtions[i])( );
	else
		std::cout << "Unknown level of complain" << std::endl;
}

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    return;
}

void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    return ;
}

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    return ;
}

void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    return ;
}