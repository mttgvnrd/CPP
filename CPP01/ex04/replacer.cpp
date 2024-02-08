/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:48:57 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/08 12:48:58 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

void    replaceInFile(std::string filename, std::string s1, std::string s2)
{
    std::stringstream	newContent;
	std::string			firstString;
	std::string			secondString;
	std::string			line;

	firstString.assign(s1);
	secondString.assign(s2);
	while (std::getline(filename, line, '\n'))
	{
		while (line.find(firstString) != std::string::npos)
			line = replaceString(line, firstString, secondString);
		newContent << line << std::endl;
	}
	outputFile << newContent.str();    
}
