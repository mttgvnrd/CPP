/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:23:01 by mgiovana          #+#    #+#             */
/*   Updated: 2024/05/20 15:23:02 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

int	main() {
	Bureaucrat *	Rosso = new Bureaucrat("Rosso", 44);
	Bureaucrat *	Giallo = new Bureaucrat("Giallo", 12);//146
	Bureaucrat *	Blu = new Bureaucrat("Blu", 65);
	Intern *		test = new Intern();
	AForm *			dolly = NULL;

	try 
	{
		dolly = test->makeForm("RobotomyRequestForm", *Giallo);
		dolly->beSigned(*Giallo);
		dolly->execute(*Rosso);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	delete dolly;
	delete test;
	delete Blu;
	delete Giallo;
	delete Rosso;
}