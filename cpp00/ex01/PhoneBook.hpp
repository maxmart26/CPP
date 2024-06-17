/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:27:11 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/24 16:03:54 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Main.hpp"
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void create_new_contact(int i,
			std::string f, std::string l, std::string n, std::string ph,
			std::string d);
		Contact get_contact(int i);
		std::string	get_first_name(int i);
		std::string	get_last_name(int i);
		std::string	get_nickname(int i);
		std::string	get_number(int i);
		std::string	get_darkest_secret(int i);

	private:
		Contact phoneBook[8];
};

#endif
