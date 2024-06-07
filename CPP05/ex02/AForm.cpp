/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:23:42 by mgiovana          #+#    #+#             */
/*   Updated: 2024/05/29 13:57:48 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string& setName, const int setSing, const int setExe) :
    name(setName), sign_Grade(setSing), exe_Grade(setExe)
{
    std::cout << "AForm base constructor called." << std::endl;
    if (sign_Grade < 1 || exe_Grade < 1)
        throw AForm::GradeTooHighException();
    else if (sign_Grade > 150 || exe_Grade > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(): name(""), sign(false), sign_Grade(0), exe_Grade(0)
{
    std::cout << "AForm default constructor called." << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called." << std::endl;
}

AForm::AForm(const AForm& src) : name(src.name), sign(src.sign), sign_Grade(src.sign_Grade), exe_Grade(src.exe_Grade)
{
    std::cout << "AForm copy constructor called." << std::endl;
	*this = src;
} 

std::string AForm::getName() const
{
    return this->name;
}

int AForm::getSignedGrade() const
{
    return this->sign_Grade;
}

int AForm::getExeGrade() const
{
    return this->exe_Grade;
}

bool AForm::isSign() const
{
    return this->sign;
}

AForm& AForm::operator=(const AForm& src){
	if (this != &src)
		this->sign = src.sign;
	return *this;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Error: Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Error :Grade too low";
}

void AForm::beSigned(Bureaucrat const &b){
	if (b.getGrade() > this->sign_Grade)
		throw AForm::GradeTooLowException();
	this->sign = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
    os << "AForm name : " <<f.getName() << std::endl;
    os << "Signed : ";
    if (f.isSign())
        os << "Yes" << std::endl;
    else
        os << "No" << std::endl;
    os << "AForm need Grade " << f.getSignedGrade() << "to sign, and Grade " << f.getExeGrade() << " to execute";
    return os;
}
