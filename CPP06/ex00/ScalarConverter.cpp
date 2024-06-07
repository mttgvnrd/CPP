/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:56:16 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/03 15:56:18 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() 
{
	std::cout << "default ScalarConverter constructor" << std::endl;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter &src) {
	if (this != &src) {}
	return (*this);
}

ScalarConverter::~ScalarConverter() 
{
	std::cout << "default ScalarConverter destructor" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& src)
{
	std::cout << "ScalarConverter copy constructor called." << std::endl;
	*this = src;
}

static void		char_conv(std::string str) {
	std::cout << "char: " << str[0] << std::endl;
	std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float: " << std::fixed << static_cast<float>(str[0]) << "f" << std::endl;
	std::cout << "double: " << std::fixed << static_cast<double>(str[0]) << std::endl;
}

static void		isNegInf() 
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << "-2147483648" << std::endl;
	std::cout << "float: " << "1.17549e-038" << std::endl;
	std::cout << "double: " << __DBL_MIN__ << std::endl;
}

static void		isPosInf() 
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << "2147483647" << std::endl;
	std::cout << "float: " << "3.40282e+038" << std::endl;
	std::cout << "double: " << __DBL_MAX__ << std::endl;
}

static void		nanConvert() 
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

static void		error() 
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << 0 << std::endl;
	std::cout << "float: " << 0 << std::endl;
	std::cout << "double: " << 0 << std::endl;
}

static void	check_execption(std::string str)
{
		if (str.length() == 1)
			char_conv(str);
		else if (str == "+inf" || str == "+inff")
			isPosInf();
		else if (str == "nan" || str == "nanf")
			nanConvert();
		else if (str == "-inf" || str == "-inff")
			isNegInf();
		else
			error();
}

static void check_float(std::string str)
{
	long unsigned int	i = 0;
	while (i < str.length() - 1 && (std::isdigit(str[i]) || str[i] == '.'))
		i++;
	if (i == str.length() - 1)
	{
		float	float_n = atof(str.c_str());
		if (float_n < 0 || float_n > 127)
			std::cout << "char: impossible" << std::endl;
		else if (float_n < 32 || float_n == 127)
			std::cout << "char: non-displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(float_n) << std::endl;
		std::cout << "int: " << static_cast<int>(float_n) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(4) << float_n << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(4) << static_cast<double>(float_n) << std::endl;
	}
	else
		error();
}

static void check_int(std::string str)
{
	long unsigned int	i = 0;
	while (std::isdigit(str[i]))
		i++;
	if (i == str.length())
	{
		int	int_n = atoi(str.c_str());	
		if (int_n < 0 || int_n > 127)
			std::cout << "char: impossible" << std::endl;
		else if (int_n < 32 || int_n == 127)
			std::cout << "char: non-displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(int_n) << std::endl;
		std::cout << "int: " << int_n << std::endl;
		std::cout << "float: " << std::fixed << static_cast<float>(int_n) << "f" << std::endl;
		std::cout << "double: " << std::fixed << static_cast<double>(int_n) << std::endl;
	}	
	else
		error();
}

static void check_double(std::string str)
{
	long unsigned int	i = 0;
	while (std::isdigit(str[i]) || str[i] == '.')
		i++;
	if (i == str.length())
	{
		double	double_n = atof(str.c_str());
		if (double_n < 0 || double_n > 127)
			std::cout << "char: impossible" << std::endl;
		else if (double_n < 32 || double_n == 127)
			std::cout << "char: non-displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(double_n) << std::endl;
		std::cout << "int: " << static_cast<int>(double_n) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(4) << static_cast<float>(double_n) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(4) << double_n << std::endl;
	}
	else
		error();
}

static bool	isDouble(std::string const &str) 
{
	std::istringstream	iss(str);
	double	dub;

	iss >> dub;
	return (iss.eof() && !iss.fail());
}

void ScalarConverter::converter(std::string str)
{
	if (std::isprint(str[0]) && !std::isdigit(str[0])) 
		check_execption(str);
	else if (isDouble(str))
		check_double(str);
	else if (str[str.length() -1]== 'f')
		check_float(str);
	else if (std::isdigit(str[0])) 
		check_int(str);
	else 
		error();
}
