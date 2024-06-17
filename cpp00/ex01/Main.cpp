/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:14:20 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/24 18:20:08 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"
bool    verif(std::string str)
{
    if (str.find("\x1b[A") <= str.length() || str.find("\x1b[B") <= str.length() || 
		str.find("\x1b[C") <= str.length() || str.find("\x1b[D") <= str.length() 
		|| str.find("\t") <= str.length())
		{
			return (1);
		}
	return (0);
}
int    ft_add(PhoneBook *phoneBook,int i)
{
    std::string name;
    std::string last_name;
    std::string number;
    std::string nickname;
    std::string darkest_secret;
    
    std::cout << "Quel est le Name\n";
    std::getline(std::cin, name);
    if (name.empty() || verif(name))
    {
        std::cout << "Name incorrect\n";
        return 0; 
    }
    std::cout << "Quel est le Last Name\n";
    std::getline(std::cin, last_name);
    if (last_name.empty() || verif(last_name))
    {
        std::cout << "Last Name incorrect\n";
        return 0;   
    }
    std::cout << "Quel est le number\n";
    std::getline(std::cin, number);
    if (number.empty() || verif(number))
    {
        std::cout << "number incorrect\n";
        return 0;   
    }
    std::cout << "Quel est le nickname\n";
    std::getline(std::cin, nickname);
    if (nickname.empty() || verif(nickname))
    {
        std::cout << "nickname incorrect\n";
        return 0;   
    }
    std::cout << "Quel est le darkest_secret\n";
    std::getline(std::cin, darkest_secret);
    if (darkest_secret.empty() || verif(darkest_secret))
    {
        std::cout << "darkest_secret incorrect\n";
        return 0;   
    }

    (*phoneBook).create_new_contact(i,name, last_name, nickname, number, darkest_secret);
    return 1;
}

void    search(PhoneBook *phoneBook, int i)
{
   std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	user_index;
	int			index;

	// setw(10) = sets the width to 10 characters
	std::cout << std::endl;
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int j = 1; j < i + 1; j++)
	{
		first_name = (*phoneBook).get_first_name(j - 1);
		last_name = (*phoneBook).get_last_name(j - 1);
		nickname = (*phoneBook).get_nickname(j - 1);
		if (first_name.length() >= 10)
		{
			first_name.resize(9);
			first_name.resize(10, '.');
		}
		if (last_name.length() >= 10)
		{
			last_name.resize(9);
			last_name.resize(10, '.');
		}
		if (nickname.length() >= 10)
		{
			nickname.resize(9);
			nickname.resize(10, '.');
		}
		std::cout << std::setw(10) << j << "|" << std::setw(10) << first_name << "|" << std::setw(10) << last_name << "|" << std::setw(10) << nickname<< "|" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Please enter the contact's index to see more details:\n> ";
	std::getline(std::cin, user_index);
	if (std::cin.eof())
		return ;
	index = std::atoi(user_index.c_str());
	if (index && index >=1 && index <= i)
		(*phoneBook).get_contact(std::atoi(user_index.c_str()) - 1).ft_print();
	else
		std::cout << "Wrong index" << "\n> ";
	return ;
}
int main(void)
{
    std::string user_command;
    PhoneBook  phoneBook;
    int i = 0;
    int index;
    
    while(1)
    {
        std::cout << "SEARCH , ADD or EXIT\n";
        std::getline(std::cin, user_command);
        if (user_command == "EXIT")
            return 0 ;
        else if (user_command == "ADD")
        {
            if(i >= 8)
            {
                index = i % 8;
                if (ft_add(&phoneBook, index) == 1)
                    i++;
            }
            else
            {
                if (ft_add(&phoneBook, i) == 1)
                    i++;
            }
        }
        else if (user_command == "SEARCH")
        {
            if (i >= 8)
                search(&phoneBook, 8);
            else
                search(&phoneBook, i);
        }
        else
            if(!std::cin.eof())
                std::cout << "merci de mettre une commande valide\n";
    }
    return (0);
}