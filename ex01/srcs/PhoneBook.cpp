/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:58:03 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/05 20:58:10 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook's default constructor was called" << std::endl;
}

void PhoneBook::addContact()
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
			}
			if (!inputs[index].empty())
				break;
			std::cout << std::endl << "Please enter a valid input" << std::endl;
		}
	}
}