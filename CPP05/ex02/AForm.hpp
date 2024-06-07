/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:23:48 by mgiovana          #+#    #+#             */
/*   Updated: 2024/05/29 13:58:02 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    protected:
        const std::string name;
        bool    sign;
        const int sign_Grade;
        const int exe_Grade; 
        AForm();

    public:
        AForm(const std::string& setName, const int setSing, const int setExe);
        AForm(const AForm& src);
        virtual ~AForm();
        AForm& operator=( const AForm& src);
        std::string getName()  const;
        bool        isSign() const;
        int         getSignedGrade()    const;
        int         getExeGrade()    const;
        
        void beSigned(Bureaucrat const &b);
        virtual void execute(Bureaucrat &executor) const = 0;

    class GradeTooHighException : public std::exception {
        public:
            const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            const char *what() const throw();
    };

};

std::ostream& operator<<(std::ostream& os, const AForm& b);


#endif
