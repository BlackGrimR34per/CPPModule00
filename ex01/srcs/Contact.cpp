/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:56:32 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/05 15:23:57 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact()
{
	std::cout << "Default contact constructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact's destructor was called" << std::endl;
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}