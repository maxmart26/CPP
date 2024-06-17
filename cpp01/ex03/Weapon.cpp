/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:07:09 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/29 07:00:17 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
    
}
Weapon::~Weapon()
{
    
}
std::string Weapon::getType() const
{
    return (this->type);
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}