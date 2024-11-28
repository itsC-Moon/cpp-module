#include "Contact.hpp"
#include <cstdlib>
#include <iostream>

int Contact::getPhoneNumber()
{
	std::cout << "Enter phone number: ";
	if (!std::getline(std::cin, this->phoneNumber))
		return -1;
	if (this->phoneNumber.empty())
		return (std::cout << "phone Number should not be empty\n", 1);
	for (size_t i = 0; i < this->phoneNumber.length(); i++)
	{
		if (std::isdigit(this->phoneNumber[i]) == 0)
		{
			std::cout << "Invalid phone number" << std::endl;
			return (1);
		}
	}
	return (0);
}

int Contact::getInfo(std::string &feild, std::string feildName)
{
	std::cout << "Enter " << feildName << ": ";
	if (!std::getline(std::cin, feild))
		return (-1);
	if (feild.empty())
		return (std::cout << feildName << " should not be empty\n", 1);
	return (0);
}

void Contact::printAll()
{
	std::cout << this->firstName << "\n";
	std::cout << this->lastName << "\n";
	std::cout << this->nickName << "\n";
	std::cout << this->phoneNumber << "\n";
	std::cout << this->darkestSecret << "\n";
}

int Contact::ReadInfo(std::string &str, std::string name)
{

	while (1)
	{
		switch (this->getInfo(str, name))
		{
			case -1: return (-1);
			case 0: return (0);
		}
	}
	return (0);
}

int Contact::addInfo()
{
	int flags;

	if (this->ReadInfo(this->firstName, "FirstName") == -1)
		return (-1);
	if (this->ReadInfo(this->lastName, "LastName") == -1)
		return (-1);
	if (this->ReadInfo(this->nickName, "NickName") == -1)
		return (-1);
	while ((flags = this->getPhoneNumber()))
	{
		if (flags == -1)
			return (-1);
		else if (flags == 0)
			break;
	}
	if (this->ReadInfo(this->darkestSecret, "Darkest Secret") == -1)
		return (-1);
	return (1);
}

std::string Contact::getFixBuffer(std::string &str)
{
	std::string buffer(10, ' ');

	for (size_t i = 0; i < 10 && i < str.size(); i++)
	{
		if (str[i] == '\t')
			buffer[i] = ' ';
		else
			buffer[i] = str[i];
	}
	if (str.size() > 10)
		buffer[9] = '.';
	return buffer;
}

void Contact::print(int idx)
{
	std::cout << idx << std::string(9, ' ') << "|";
	std::cout << this->getFixBuffer(this->firstName) << "|";
	std::cout << this->getFixBuffer(this->lastName) << "|";
	std::cout << this->getFixBuffer(this->nickName) << "\n";
}
