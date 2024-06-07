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
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

int	main() {
	Bureaucrat Rosso ("Rosso", 1);
	Bureaucrat Giallo("Giallo", 14);
	Bureaucrat Blu ("Blu", 1);
	ShrubberyCreationForm shrubbery(Rosso); // albero
	RobotomyRequestForm robot(Giallo); //Drilling noise
	PresidentialPardonForm pres(Blu); //pardoned by Zaphod Beeblebrox
	//AForm Paolo();
	try {
		robot.beSigned(Rosso);
		shrubbery.beSigned(Rosso);
		pres.beSigned(Rosso);
		robot.execute(Giallo);
		shrubbery.execute(Rosso);
		pres.execute(Blu);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}