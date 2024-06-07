/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:33:50 by mgiovana          #+#    #+#             */
/*   Updated: 2024/04/04 15:33:52 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(0)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called." << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat& src): name(src.name), grade(src.grade)
{
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	*this = src;
}

void    Bureaucrat::incrementGrade()
{
    if (this->grade <= 1)
        throw GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (this->grade >= 150)
        throw GradeTooLowException();
    this->grade++;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src){
	if (this != &src)
		this->grade = src.grade;
	return *this;
}

Bureaucrat::Bureaucrat(const std::string& setName, const int setGrade) : name(setName) 
{
    std::cout << "Bureaucrat base constructor called" << std::endl;
    if (setGrade > 150)
        throw GradeTooLowException();
    else if (setGrade < 1)
        throw GradeTooHighException();
    this->grade = setGrade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Error: grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Error: grade too low";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << " grade is " << b.getGrade() << std::endl;
    return os;
}

void Bureaucrat::signAForm(AForm& f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << this->name << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr	<< this->name << " couldn’t sign " << f.getName() << " because "<< e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const& form)
{
    if (this->grade > form.getExeGrade())
	{
		std::cout << this->name << " can't execute " << form.getName() << std::endl;
		throw AForm::GradeTooLowException();
	}
	std::cout << this->name << " executed " << form.getName() << std::endl;
}