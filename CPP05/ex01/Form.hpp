/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:23:48 by mgiovana          #+#    #+#             */
/*   Updated: 2024/05/20 15:23:49 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool    sign;
        const int sign_Grade;
        const int exe_Grade; 

    public:
        Form();
        Form(const std::string& setName, const int setSing, const int setExe);
        Form(const Form& src);
        ~Form();
        Form& operator=( const Form& src);
        std::string getName()  const;
        bool        isSign() const;
        int         getSignedGrade()    const;
        int         getExeGrade()    const;
        
        void beSigned(Bureaucrat const &b);

    class GradeTooHighException : public std::exception {
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
        const char *what() const throw();
    };

};

std::ostream& operator<<(std::ostream& os, const Form& b);


#endif