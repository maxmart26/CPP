/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:22:32 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/24 16:03:50 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

class Contact {
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _number;
    std::string _darkest_secret;

public:

    Contact();
	
	~Contact();

	void ft_set_values(std::string f, std::string l, std::string n, std::string ph, std::string d);

	void ft_print(void) const;

	std::string	get_first_name() const;
	std::string	get_last_name() const;
	std::string	get_nickname() const;
	std::string	get_number() const;
	std::string	get_darkest_secret() const;
};
