/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:14:55 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/29 07:04:35 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
    // std::cout << "HumanA " << name << " created with ";
	// std::cout << weapon.getType() << std::endl;
}
HumanA::~HumanA()
{
   // std::cout << "HumanA " << this->name << " destroyed" << std::endl;
}

void HumanA::attack()
{
    std::cout << this->name << "attacks wich their " << weapon.getType() << std::endl;
}
void HumanA::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}