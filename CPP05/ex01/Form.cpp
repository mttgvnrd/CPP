/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:23:42 by mgiovana          #+#    #+#             */
/*   Updated: 2024/05/20 15:23:44 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form(const std::string& setName, const int setSing, const int setExe) :
    name(setName), sign_Grade(setSing), exe_Grade(setExe)
{
    std::cout << "Form base constructor called." << std::endl;
    if (sign_Grade < 1 || exe_Grade < 1)
        throw Form::GradeTooHighException();
    else if (sign_Grade > 150 || exe_Grade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(): name(""), sign(false), sign_Grade(0), exe_Grade(0)
{
    std::cout << "Form default constructor called." << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called." << std::endl;
}

Form::Form(const Form& src) : name(src.name), sign(src.sign), sign_Grade(src.sign_Grade), exe_Grade(src.exe_Grade)
{
    std::cout << "Form copy constructor called." << std::endl;
	*this = src;
} 

std::string Form::getName() const
{
    return this->name;
}

int Form::getSignedGrade() const
{
    return this->sign_Grade;
}

int Form::getExeGrade() const
{
    return this->exe_Grade;
}

bool Form::isSign() const
{
    return this->sign;
}

Form& Form::operator=(const Form& src){
	if (this != &src)
		this->sign = src.sign;
	return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

void Form::beSigned(Bureaucrat const &b){
	if (b.getGrade() > this->sign_Grade)
		throw Form::GradeTooLowException();
	this->sign = true;
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
    os << "Form name : " <<f.getName() << std::endl;
    os << "Signed : ";
    if (f.isSign())
        os << "True" << std::endl;
    else
        os << "False" << std::endl;
    os << "Form need Grade " << f.getSignedGrade() << "to sign, and Grade " << f.getExeGrade() << " to execute";
    return os;
}