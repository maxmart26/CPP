/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:19:52 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/31 17:23:33 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}
Harl::~Harl()
{
}
void Harl::complain(std::string level)
{
    void    (Harl::*functionPTRS[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (complains[i] == level)
			(this->*functionPTRS[i])();
	}
}