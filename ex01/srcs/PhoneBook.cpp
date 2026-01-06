/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:58:03 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/06 17:49:58 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook's default constructor was called" << std::endl;
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

void	PhoneBook::addContact()
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