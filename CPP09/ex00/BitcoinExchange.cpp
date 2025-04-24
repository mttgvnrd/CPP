/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:31:33 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/18 14:31:34 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

bool fileCheck(const std::string& path)
{
    std::ifstream file(path.c_str());
    if (!file)
          // std::cout << storedValue << std::endl;
 return false;
    file.close();
    return true;
}

BitcoinExchange::BitcoinExchange(const std::string& database, const std::string& list) {
    if (!fileCheck(database) || !fileCheck(list))// controllo su file
        throw FileError();
    listPath = list;
    data_read(database);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src) {
    valueData = src.valueData;
    listPath = src.listPath;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src) {
    if (this != &src) {
        valueData = src.valueData;
        listPath = src.listPath;
    }
    return *this;
}

//legge lo stroico del file CSV e li savla in dataMap
void BitcoinExchange::data_read(const std::string& database)
{
    std::string line, date;
    float value;
    std::ifstream db(database.c_str());

    while (std::getline(db, line)) {
        std::istringstream iss(line);
        std::getline(iss, date, ',');
        iss >> value;
        valueData[date] = value;
    }
    db.close();
}

//controlla se la data e precedente all primo dato del file CSV
bool check_date(const std::string& date)
{
    std::istringstream iss(date);
    int year, month, day;
    char delimiter;
    
    if (iss >> year >> delimiter >> month >> delimiter >> day)
        if (year >= 2009 && month >= 1 && month <= 12 && day >= 1 && day <= 31)
            return true;
    return false;
}

void BitcoinExchange::exchanger() const {
    std::string row, date;
    float inputValue, storedValue;

    std::ifstream lst(listPath.c_str());
    std::getline(lst, row); // Salta la prima riga

    while (std::getline(lst, row)) {
        std::istringstream iss(row);
        std::getline(iss, date, '|');
        if (!(iss >> storedValue))
        {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }

        for (std::map<std::string, float>::const_reverse_iterator rev_it = valueData.rbegin(); rev_it != valueData.rend(); ++rev_it) {
            if (rev_it->first.compare(date) <= 0) { //confronta le date fino a trovare la prima data che è minore se non trova una corrispondeza precisa
                inputValue = rev_it->second;
                break;
            }
        }
    if (!check_date(date))
        std::cerr << "Error: bad input => " << date << std::endl;
    else if (storedValue > 1000)
        std::cerr << "Error: too large number." << std::endl;
    else if (storedValue < 0)
        std::cerr << "Error: not a positive number." << std::endl;
    else
        std::cout << date << " => " << storedValue << " = " << storedValue * inputValue << std::endl;
    }
    lst.close();
}