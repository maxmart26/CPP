/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:29:21 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/24 15:02:17 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"


Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::ft_print(void) const
{
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_number << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
}

void Contact::ft_set_values(std::string f, std::string l, std::string n, std::string ph, std::string d)
{
	_first_name = f;
	_last_name = l;
	_nickname = n;
	_number = ph;
	_darkest_secret = d;
}

std::string	Contact::get_first_name() const
{
	return (_first_name);
}

std::string	Contact::get_last_name() const
{
	return (_last_name);
}

std::string	Contact::get_nickname() const
{
	return (_nickname);
}

std::string	Contact::get_number() const
{
	return (_number);
}

std::string	Contact::get_darkest_secret() const
{
	return (_darkest_secret);
}