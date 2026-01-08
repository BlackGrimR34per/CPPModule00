/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:58:03 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/08 18:12:31 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include <iomanip>
#include <limits>

PhoneBook::PhoneBook()
{
	currentIndex = 0;
	// std::cout << "PhoneBook's default constructor was called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	// std::cout << "PhoneBook's destructor was called" << std::endl;
}

void	PhoneBook::print_cell(const std::string &text, int width) const
{
	std::cout << "|";
	std::cout << std::setw(width);
	std::cout << text;
}

bool	PhoneBook::isValidInput(std::string input)
{
	int	index;

	if (input.find("  ") != std::string::npos)
		return (false);
	index = -1;
	while (input[++index])
		if (std::isspace(input[index]) && input[index] != ' ')
			return (false);
	return (true);
}

void	PhoneBook::addContact(void)
{
	std::string inputs[5];
	std::string prompts[5] = {
		"First name: ",
		"Second name: ",
		"Nickname: ",
		"Phone number: ",
		"Darkest secret: "
	};

	for (int index = 0; index < 5; index++)
	{
		while (true)
		{
			std::cout << prompts[index];
			if (!std::getline(std::cin >> std::ws, inputs[index]))
			{
				std::cin.clear();
				std::clearerr(stdin);
				std::cout << std::endl;
			}
			if (!inputs[index].empty())
			{
				if (isValidInput(inputs[index]))
					break;
			}
			std::cout << "Please enter a valid input" << std::endl;
		}
	}
	contacts[currentIndex++] = Contact(inputs[0], inputs[1], inputs[2], inputs[3], inputs[4]);
	currentIndex %= NUM_CONTACTS;
}

int	PhoneBook::get_number_of_contacts(void)
{
	int	count;

	count = 0;
	for (int index = 0; index < 8;  index++)
	{
		if (!this->contacts[index].is_empty())
			count++;
	}
	return (count);
}

void	PhoneBook::searchContact(void)
{
	int			input;
	int			column_width = 10;
	std::string	header_separator = "+----------+----------+----------+----------+\n";
	std::string	h1 = "index", h2 = "first name", h3 = "lastname", h4 = "nickname";
	std::string	seperator = "|";

	if (this->contacts[0].is_empty() == true)
	{
		std::cout << "--- PhoneBook Is Empty ---" << std::endl;
		return;
	}
	std::cout << header_separator;
	print_cell(h1, column_width);
	print_cell(h2, column_width);
	print_cell(h3, column_width);
	print_cell(h4, column_width);
	std::cout << "|" << std::endl;
	std::cout << header_separator;
	for (int index = 0; index < 8; index++)
	{
		if (this->contacts[index].is_empty() == true)
			continue;
		std::cout << "|" << std::setw(column_width) << (index + 1);
		print_cell(this->contacts[index].format_string(this->contacts[index].get_first_name()), column_width);
		print_cell(this->contacts[index].format_string(this->contacts[index].get_last_name()), column_width);
		print_cell(this->contacts[index].format_string(this->contacts[index].get_nickname()), column_width);
		std::cout << "|" << std::endl;
		std::cout << header_separator;
	}
	while (true)
	{
		std::cout << "Please enter the index of individual to display: ";
		if (!(std::cin >> input))
		{
			if (std::cin.eof())
			{
				std::cin.clear();
				std::clearerr(stdin);
				std::cout << std::endl << "Another day another fail 🗿" << std::endl;
				break;
			}
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter a number." << std::endl;
			continue;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (input < 1 || input > this->get_number_of_contacts())
			std::cout << "Invalid index selected" << std::endl;
		else
		{
			input = input - 1;
			std::cout << this->contacts[input].get_first_name() << std::endl;
			std::cout << this->contacts[input].get_last_name() << std::endl;
			std::cout << this->contacts[input].get_nickname() << std::endl;
			std::cout << this->contacts[input].get_phone_number() << std::endl;
			std::cout << this->contacts[input].get_darkest_secret() << std::endl;
			break;
		}
	}
}