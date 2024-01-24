/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:21:20 by mgiovana          #+#    #+#             */
/*   Updated: 2024/01/24 13:44:32 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	if (argc > 1)
	{
		for ( a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b]; b++)
			{
				char c = std::toupper(argv[a][b]);
				std::cout << c;
			}
		}
		std::cout << std::endl;
	}
	else
		std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
