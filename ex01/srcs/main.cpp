/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:53:13 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/06 20:09:21 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include <limits>
#include "../include/PhoneBook.hpp"

int	main()
{
	PhoneBook phone;
	std::string	command;

	std::cout << "--- PhoneBook Text Gui ---" << std::endl;
	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin >> std::ws, command))
		{
			if (std::cin.eof())
			{
				std::cin.clear();
				std::clearerr(stdin);
				std::cout << std::endl << "Cheeky 🗿" << std::endl;
				continue;
			}
		}
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			phone.addContact();
		else if (command == "SEARCH")
			phone.searchContact();
		else
			std::cout << "Invalid command. Please use 'ADD', 'SEARCH', or 'EXIT'." << std::endl;
	}
	return (EXIT_SUCCESS);
}