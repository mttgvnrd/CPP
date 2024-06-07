/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:15:14 by mgiovana          #+#    #+#             */
/*   Updated: 2024/05/31 15:15:16 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(Intern const &src) {
    *this = src;
}

Intern::~Intern() {}

Intern &Intern::operator=(Intern const &rhs) {
    (void)rhs;
    return *this;
}

AForm* Intern::makeForm(const std::string& formName, Bureaucrat& target)
{
	std::string type[3] = {"PresidentialPardonForm",
							 "RobotomyRequestForm",
							 "ShrubberyCreationForm"};
	AForm * form = NULL;
	AForm *	(Intern::*funcPtr[3])(Bureaucrat & target) const = {&Intern::isPresidential, &Intern::isRobotomy, &Intern::isShrubbery};
	int i;
	for (i = 0; i < 3; i++)
	{
		if (type[i]== formName)
		{
			form = (this->*funcPtr[i])(target);
			std::cout << "Intern create " << formName << " form." << std::endl;
			return form;
		}
	}
	std::cout << "Intern can't create " << formName << " form : Invalid form name." << std::endl;
	return NULL;
}

AForm * Intern::isShrubbery(Bureaucrat & target) const
{
	AForm * form = new ShrubberyCreationForm(target);
	return form;
}
AForm * Intern::isRobotomy(Bureaucrat & target) const
{
	AForm * form = new RobotomyRequestForm(target);
	return form;
}
AForm * Intern::isPresidential(Bureaucrat & target) const
{
	AForm * form = new PresidentialPardonForm(target);
	return form;
}