/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:33:45 by mgiovana          #+#    #+#             */
/*   Updated: 2024/04/04 15:33:48 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string   name;
        int     grade;

    public:

    Bureaucrat();
    Bureaucrat(const std::string& setName, const int setGrade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& src);
    std::string getName()  const;
    int         getGrade() const;
    Bureaucrat& operator=( const Bureaucrat& src);
    void signForm(Form& f) const;
    void    incrementGrade();
    void    decrementGrade();

    class GradeTooHighException : public std::exception {
        const char *what() const throw();
    };


    class GradeTooLowException : public std::exception {
        const char *what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif