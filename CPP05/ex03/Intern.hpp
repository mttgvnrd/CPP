/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:15:09 by mgiovana          #+#    #+#             */
/*   Updated: 2024/05/31 15:15:12 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

class Intern {
public:
    Intern();
    Intern(Intern const &src);
    ~Intern();
    Intern &operator=(Intern const &rhs);
    AForm* makeForm(const std::string& formName, Bureaucrat& target);
    class FormNotFoundException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
	AForm *		isRobotomy(Bureaucrat & target) const;
	AForm *		isShrubbery(Bureaucrat & target) const;
    AForm *		isPresidential(Bureaucrat & target) const;

};

#endif
