/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:36:16 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/08 18:11:39 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../include/Contact.hpp"
#include <iostream>
#include <string>
#include <cstdio>

# define NUM_CONTACTS 8

class PhoneBook {
	Contact	contacts[NUM_CONTACTS];
	bool	isValidInput(std::string input);
	int		currentIndex;
	void	print_cell(const std::string &text, int width) const;
	int		get_number_of_contacts(void);

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	searchContact(void);
};

#endif