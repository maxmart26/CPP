/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:50:48 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/27 17:03:12 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie object " << this->name << " created" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "Zombie object " << this->name << " destroyed" << std::endl;
}
void	Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}