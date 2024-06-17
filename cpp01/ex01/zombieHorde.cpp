/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matorgue <warthog2603@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:45:04 by matorgue          #+#    #+#             */
/*   Updated: 2024/05/27 18:00:53 by matorgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zom = new Zombie[N];

    for(int i = 0; i < N; i++)
    {
        zom[i].setname(name);
        std::cout << "Zombie object " << name << " created" << std::endl;
    }
    return zom;
}