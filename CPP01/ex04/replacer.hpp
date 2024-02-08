/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:49:05 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/08 12:49:07 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef REPLACER_HPP
# define REPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <fstream>
#include <sstream>

void    replaceInFile(std::string filename, std::string s1, std::string s2);
int check_input(int argc, char* argv[], std::string filename);


#endif