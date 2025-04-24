/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:51:43 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/18 12:51:45 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <cstdlib>

class BitcoinExchange
{
    private:
        std::map<std::string, float> valueData; // std::string = chiave = data || float == valueData == valore associato a quella data
        BitcoinExchange();
        std::string listPath;

    public: 
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& src);
        BitcoinExchange& operator=(const BitcoinExchange& src);

        BitcoinExchange(const std::string& database, const std::string& list);

        void data_read(const std::string& database);
	    void exchanger() const;
};

class FileError : public std::exception {
        const char *what() const throw() {
            return "Error, can't open file";
        }
    };




#endif