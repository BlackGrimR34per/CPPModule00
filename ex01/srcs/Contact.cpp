/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:56:32 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/06 17:44:42 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact()
{
	std::cout << "Default contact constructor called" << std::endl;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret):
	first_name(first_name), last_name(last_name), nickname(nickname), phone_number(phone_number), darkest_secret(darkest_secret)
{
	std::cout << "Contact " << first_name << " was created via parameterised constructor" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact's destructor was called" << std::endl;
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}