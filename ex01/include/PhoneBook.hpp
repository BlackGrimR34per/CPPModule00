/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:36:16 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/05 15:23:33 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../include/Contact.hpp"

# define NUM_CONTACTS 8

class PhoneBook {
	Contact contacts[NUM_CONTACTS];
	
	public:
		PhoneBook();
		void addContact();
};

#endif