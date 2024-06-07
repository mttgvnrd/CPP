/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:23:01 by mgiovana          #+#    #+#             */
/*   Updated: 2024/05/20 15:23:02 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{

    try {
			Bureaucrat b("Paolo", 33);
			Form f("Form", 34, 56);
			std::cout << "Name: " << b.getName() << "\nGrade: " << b.getGrade() << std::endl; 
			b.signForm(f);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	return 0;
}
