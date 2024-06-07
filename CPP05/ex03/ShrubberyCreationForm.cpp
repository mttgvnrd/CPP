/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:56:13 by mgiovana          #+#    #+#             */
/*   Updated: 2024/05/29 13:56:15 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat &target) : AForm::AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "ShrubberyCreationForm base constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called." << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm::AForm(src), target(src.target)
{
    std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
    *this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
	if (this != &src)
		this->target = src.target;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat & executor) const {
	executor.executeForm(*this);
    std::string output_file;

	if (this->sign == true)
    {
        output_file = this->target.getName() + "_shrubbery";
        std::ofstream output(output_file.c_str());
        output <<"    oxoxoo    ooxoo" << std::endl;
        output <<"  ooxoxo oo  oxoxooo" << std::endl;
        output <<" oooo xxoxoo ooo ooox" << std::endl;
        output <<" oxo o oxoxo  xoxxoxo" << std::endl;
        output <<"  oxo xooxoooo o ooo" << std::endl;
        output <<"    ooooo  /o/o" << std::endl;
        output <<"         |    /" << std::endl;
        output <<"         |   /" << std::endl;
        output <<"         |  |" << std::endl;
        output <<"         | D|" << std::endl;
        output <<"         |  |" << std::endl;
        output <<"         |  |" << std::endl;
        output <<"  ______/___|____" << std::endl;

	}
    else
		std::cout << this->name << " is not signed, can't execute" << std::endl;
}

std::ostream& operator<<(std::ostream& os, ShrubberyCreationForm const &scf)
{
    os << "Form name : " <<scf.getName() << std::endl;
    os << "Signed : ";
    if (scf.isSign())
        os << "Yes" << std::endl;
    else
        os << "No" << std::endl;
    os << "ShrubberyCreationForm need Grade " << scf.getSignedGrade() << " to sign, and Grade " << scf.getExeGrade() << " to execute";
    return os;
}

