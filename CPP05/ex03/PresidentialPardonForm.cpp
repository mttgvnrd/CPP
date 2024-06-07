/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:57:06 by mgiovana          #+#    #+#             */
/*   Updated: 2024/05/29 13:57:08 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(Bureaucrat &target) : AForm::AForm("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << "PresidentialPardonForm base constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string& target) : AForm::AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm base constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called." << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm::AForm(src), target(src.target)
{
    std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
    *this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
	if (this != &src)
		this->target = src.target;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat & executor) const {
	executor.executeForm(*this);
	if (this->sign == true)
		std::cout << this->target.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	else
		std::cout << this->name << " is not signed, can't execute" << std::endl;
}

std::ostream& operator<<(std::ostream& os, PresidentialPardonForm const &pbf)
{
    os << "Form name : " <<pbf.getName() << std::endl;
    os << "Signed : ";
    if (pbf.isSign())
        os << "Yes" << std::endl;
    else
        os << "No" << std::endl;
    os << "PresidentialPardonForm need Grade " << pbf.getSignedGrade() << "to sign, and Grade " << pbf.getExeGrade() << " to execute";
    return os;
}

