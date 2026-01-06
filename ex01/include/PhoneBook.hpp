/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:36:16 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/06 14:50:40 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../include/Contact.hpp"

# define NUM_CONTACTS 8

class PhoneBook {
	Contact	contacts[NUM_CONTACTS];
	bool	isValidInput(std::string input);
	int		currentIndex = 0;

	public:
		PhoneBook();
		void addContact();
};

#endif