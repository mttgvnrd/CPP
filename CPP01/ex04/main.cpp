/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:11:02 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/08 12:11:04 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

int main(int argc, char* argv[]) 
{    
    std::ifstream   inputF;
    std::ofstream   outputF;
    std::string filename = argv[1];

    check_input(argc, argv, filename);
    std::string s1 = argv[2];
    std::string s2 = argv[3];

	inputF.open(argv[1]);
	outputF.open(filename.c_str(), std::ofstream::trunc);
    
   // replaceInFile(filename, s1, s2);

    return 0;
}

int check_input(int argc, char* argv[], std::string filename)
{
	std::ifstream	inputFile(filename);

        if (argc != 4) 
    {
        std::cerr << "Enter: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    else if (!argv[2] || !argv[3] || !*argv[2] || !*argv[3])
		std::cout << "A string is apparently missing!" << std::endl;
	else if (!inputFile.good())
		std::cout << "Input file doesn't exist or is missing of reading permissions!" << std::endl;
    else
	{
		filename = std::string(argv[1]) + ".replace";
		std::ofstream	outputFile(filename.c_str(), std::ofstream::trunc);
		if (!outputFile.failbit)
			std::cout << "Error while opening the output file!" << std::endl;
		outputFile.close();
	}
	inputFile.close();
	return 0;    
}