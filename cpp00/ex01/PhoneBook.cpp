/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:25:22 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/24 15:17:01 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"
#include "PhoneBook.hpp"

// Constructor
PhoneBook::PhoneBook()
{

}

// Destructor
PhoneBook::~PhoneBook()
{
	
}

// Returns a copy of phonebook[i] (values modified inside won't modify the class)
Contact PhoneBook::get_contact(int i)
{
	return (phoneBook[i]);
}

std::string	PhoneBook::get_first_name(int i)
{
	return (phoneBook[i].get_first_name());
}

std::string	PhoneBook::get_last_name(int i)
{
	return (phoneBook[i].get_last_name());
}

std::string	PhoneBook::get_nickname(int i)
{
	return (phoneBook[i].get_nickname());
}

std::string	PhoneBook::get_number(int i)
{
	return (phoneBook[i].get_number());
}

std::string	PhoneBook::get_darkest_secret(int i)
{
	return (phoneBook[i].get_darkest_secret());
}


void	PhoneBook::create_new_contact(int i,
	std::string f, std::string l, std::string n, std::string ph, std::string d)
{
	phoneBook[i].ft_set_values(f, l, n, ph, d);
}
