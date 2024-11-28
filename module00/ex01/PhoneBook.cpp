/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenouk <hibenouk@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:27:21 by hibenouk          #+#    #+#             */
/*   Updated: 2024/10/10 11:40:35 by hibenouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook()
{
	this->idx = 0;
	this->size = 0;
}

int PhoneBook::addContact()
{
	idx %= 8;
	if (this->contacts[idx].addInfo() == -1)
		return (-1);
	size += (size < 8);
	idx++;
	return (0);
}

void PhoneBook::display()
{
	std::string str;
	int idx;

	if (size == 0)
		return (void)(std::cout << "phonebook is empty !!!\n");
	for (int i = 0; i < size; i++)
		contacts[i].print(i);
	std::cout << "Enter an index >> ";
	std::getline(std::cin, str);
	if (str.size() != 1)
		return (void)(std::cout << "Invalid Index\n");
	idx = str[0] - '0';
	if (idx < 0 || idx >= size)
		return (void)(std::cout << "Invalid Index\n");
	this->contacts[idx].printAll();
}

void PhoneBook::run()
{
	std::string cmd;

	std::cout << "Whats can i do for you ADD SEARCH or EXIT\n";
	std::cout << ">> ";
	while (std::getline(std::cin, cmd))
	{
		if (cmd == "EXIT")
			return;
		else if (cmd == "ADD")
			this->addContact();
		else if (cmd == "SEARCH")
			this->display();
		else if (cmd.empty())
			;
		else
			std::cout << "Invalid Command\n";
		std::cout << ">> ";
	}
}
