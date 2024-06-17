/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:37:25 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/31 11:25:47 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);

void    randomChump(std::string name);

int main(void)
{
    Zombie *z = newZombie("Laura");
    z->announce();
    randomChump("Pierre");
    delete z;
}