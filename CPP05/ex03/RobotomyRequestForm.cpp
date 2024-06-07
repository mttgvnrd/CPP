/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:56:47 by mgiovana          #+#    #+#             */
/*   Updated: 2024/05/29 13:56:48 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(Bureaucrat &target) : AForm::AForm("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "RobotomyRequestForm base constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called." << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm::AForm(src), target(src.target)
{
    std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
    *this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
	if (this != &src)
		this->target = src.target;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat & executor) const {
	executor.executeForm(*this);
	if (this->sign == true)
    {
        std::cout << "***Drilling noise***" << std::endl;
	    srand(time(NULL));
        if ((rand() % 2) == 0)
            std::cout << this->target.getName() << " has been robotomized." << std::endl;
		else
			std::cout << this->target.getName() << " was not robotomized." << std::endl;
    }
    else
		std::cout << this->name << " is not signed, can't execute" << std::endl;
}

std::ostream& operator<<(std::ostream& os, RobotomyRequestForm const &rrf)
{
    os << "Form name : " <<rrf.getName() << std::endl;
    os << "Signed : ";
    if (rrf.isSign())
        os << "Yes" << std::endl;
    else
        os << "No" << std::endl;
    os << "RobotomyRequestForm need Grade " << rrf.getSignedGrade() << "to sign, and Grade " << rrf.getExeGrade() << " to execute";
    return os;
}

