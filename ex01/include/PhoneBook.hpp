/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:36:16 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/06 19:14:32 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../include/Contact.hpp"
#include <iostream>
#include <string>

# define NUM_CONTACTS 8

class PhoneBook {
	Contact	contacts[NUM_CONTACTS];
	bool	isValidInput(std::string input);
	int		currentIndex = 0;
	void	print_cell(const std::string &text, int width) const;
	int		get_number_of_contacts(void);

	public:
		PhoneBook();
		void	addContact(void);
		void	searchContact(void);
};

#endif