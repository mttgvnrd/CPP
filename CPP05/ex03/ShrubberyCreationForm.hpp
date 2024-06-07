/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:56:18 by mgiovana          #+#    #+#             */
/*   Updated: 2024/05/29 13:56:21 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
    private:
        ShrubberyCreationForm();
        Bureaucrat target;

    public :
    ShrubberyCreationForm(Bureaucrat & target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ShrubberyCreationForm& operator=( const ShrubberyCreationForm& src);
    
    void	execute(Bureaucrat & executor) const;

};
std::ostream& operator<<(std::ostream & os, ShrubberyCreationForm const &scf);

#endif
