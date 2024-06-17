/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 06:18:19 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/31 17:11:44 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) , weapon(NULL)
{
    //std::cout << "HumanB " << name << " created with ";
}
HumanB::~HumanB()
{
    
}

void HumanB::attack()
{
    if (this->weapon == NULL)
        std::cout << this->name << "attacks wich their NULL" << std::endl;
    else
        std::cout << this->name << "attacks wich their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}